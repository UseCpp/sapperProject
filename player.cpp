#include "player.h"

player::player(int iX, int iY)
    : _iX{iX}
    , _iY{iY} {
    _bIsLive = true;
    _bAvailableShop = false;
    _iCostCell = 0;
    _iMoney = 0;
    _bAvailableExit = false;
    _iCountFlags = 0;
    _iMaxCountFlags = 0;
    _iCountScanner = 0;
    _iRadiusScanner = 0;
    _iMaxCountScanner = 0;
}
// Взаимодействие с ячейкой
void player::interactWithCell(cell& currentCell) {
    if (currentCell.containsBomb()) {
        //qDebug() << "Игрок наступил на бомбу!";
        _bIsLive = false;
        _bAvailableShop = false;
        _bAvailableExit = false;
    } else if (currentCell.isHasShop()) {
        //qDebug() << "Игрок нашел магазин!";
        _bAvailableShop = true;
        _bAvailableExit = false;
    } else if (currentCell.isExitCell()) {
        //qDebug() << "Игрок нашел выход!";
        _bAvailableExit = true;
        _bAvailableShop = false;
    } else {
        //qDebug() << "Пустая ячейка. + деньги";
        if (!currentCell.isOpened()) {
            _iMoney += _iCostCell;
        }
        currentCell.reveal();
        _bAvailableShop = false;
        _bAvailableExit = false;
    }
}

bool player::isLivePlayer(){return _bIsLive;}

bool player::getAvailableShop(){return _bAvailableShop;}

int player::getMoney(){return _iMoney;}
void player::setMoneyStart(int iMoney){_iMoney = iMoney;}
void player::setCostCell(int iCostCell){_iCostCell = iCostCell;}

bool player::getAvailableExit(){return _bAvailableExit;}

int player::getX() const {return _iX;}
int player::getY() const{return _iY;}
void player::move(int dx, int dy) {_iX = dx; _iY = dy;}

int player::getCountFlags(){return _iCountFlags;}
int player::getMaxCountFlags(){return _iMaxCountFlags;}
void player::setFlagsStart(int iFlags){_iCountFlags = iFlags;}
void player::setMaxCountFlagsStart(int iMax){_iMaxCountFlags = iMax;}

void player::setScannerCount(int iCount) {_iCountScanner = iCount;}
int player::getScannerCount(){return _iCountScanner; }

void player::setRadiusScanner(int iRadius){_iRadiusScanner=iRadius; }
int player::getRadiusScanner(){return _iRadiusScanner; }

void player::setMaxCountScanner(int iCount){_iMaxCountScanner=iCount; }
int player::getMaxCountScanner(){return _iMaxCountScanner; }

playerEventResult player::placeFlag(gameField* ptrGamefield){
    auto &cell {ptrGamefield->getCell(_iX, _iY)};
    if (!cell.containsBomb() && !cell.isHasShop()) {

        if(!cell.isFlagged()){
            if(_iCountFlags == 0) return playerEventResult::dontHaveItem;
            cell.toggleFlag(); _iCountFlags--;
            return playerEventResult::success;
        } else {
            if(_iCountFlags == _iMaxCountFlags) return playerEventResult::fail;
            cell.toggleFlag(); _iCountFlags++;
            return playerEventResult::undoEvent;
        }
    }
    else return playerEventResult::fail;
}

playerEventResult player::useScanner(gameField* ptrGameField, std::vector<std::pair<int, int>>& iBombCells) {
    if(_iCountScanner == 0) return playerEventResult::dontHaveItem;

    for (int dx = -_iRadiusScanner; dx <= _iRadiusScanner; ++dx) {
        for (int dy = -_iRadiusScanner; dy <= _iRadiusScanner; ++dy) {
            int checkX = _iX + dx;
            int checkY = _iY + dy;
            // Проверяем границы поля
            if (checkX >= 0 && checkX < ptrGameField->getField().size() &&
                checkY >= 0 && checkY < ptrGameField->getField().size()) {
                auto& cell {ptrGameField->getCell(checkX, checkY)};
                if (cell.containsBomb()) iBombCells.emplace_back(checkX, checkY);
            }
        }
    }
    if(iBombCells.empty()) return playerEventResult::fail;
    else {
        _iCountScanner--;
        return playerEventResult::success;
    }
}

playerEventResult player::useOpenRandBomb(gameField* ptrGameField, std::pair<int, int>& iBombCoordinates) {
    std::vector<std::pair<int, int>> bombCoordinates;
    // Собираем все координаты с бомбами
    for (int y = 0; y < ptrGameField->getField().size(); ++y) {
        for (int x = 0; x < ptrGameField->getField()[y].size(); ++x) {
            if (ptrGameField->getCell(x, y).containsBomb() &&
                !ptrGameField->getCell(x, y).isOpenedBomb())
                bombCoordinates.emplace_back(x, y);
        }

    // Проверяем, есть ли хотя бы одна бомба
    if (bombCoordinates.empty()) return playerEventResult::fail;

    // Выбираем случайную координату
    srand(static_cast<unsigned>(time(nullptr)));
    auto randomIndex = rand() % bombCoordinates.size();
    iBombCoordinates = bombCoordinates[randomIndex];

    return playerEventResult::success;
    }
}



