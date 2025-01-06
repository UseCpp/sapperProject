#include "shopgame.h"

//TODO: здесь видно много копипаста. Методы buy очень похожи. Разобраться, как сделать общий алгоритм.
//      Такие простые методы сетеров и гетеров вынести в объявлениие класса. Незачем тут плодить столько кода. 

shopgame::shopgame() {
    _iCostFlags = 0;
    _iCostUpgradeInventory=0;
    _iMaxUpgradeInventory=0;
    _iCurrentUpgradeInventory=0;
    _iCostScanner=0;
    _iCostRadiusScanner=0;
    _iMaxRadiusScanner=0;
    _iCurrentRadiusScanner=1;
    _iCostUpgradeInventoryScanner=0;
    _iMaxUpgradeInventoryScanner=0;
    _iCurrentUpgradeInventoryScanner=0;
    _iCostOpenRandBomb=0;
    _iMaxOpenRandBomb=0;
    _iCurrentOpenUsed=0;
}

int shopgame::getCostFlags(){return _iCostFlags;}
void shopgame::setCostFlag(int iCost){_iCostFlags = iCost;}

ShopResult shopgame::buyFlags(player* ptrPlayer) {
    // Нельзя превысить лимит флагов
    if (ptrPlayer->getCountFlags() == ptrPlayer->getMaxCountFlags()) return ShopResult::noInventorySpace;
    if(ptrPlayer->getMoney() >= _iCostFlags)
    {
        // Покупаем товар
        int iNewCountFlags {ptrPlayer->getCountFlags() + 1};
        ptrPlayer->setFlagsStart(iNewCountFlags);

        // Вычитаем деньги
        int iNewMoneyCount {ptrPlayer->getMoney() - _iCostFlags};
        ptrPlayer->setMoneyStart(iNewMoneyCount);
        return ShopResult::success;
    } else return ShopResult::notEnoughMoney;
}

int shopgame::getCostUpgradeInventoryFlag(){return _iCostUpgradeInventory;}
void shopgame::setCostUpgradeInventoryFlag(int iCost){_iCostUpgradeInventory = iCost;}

int shopgame::getMaxUpgradeInventoryFlag(){return _iMaxUpgradeInventory;}
void shopgame::setMaxUpgradeInventoryFlag(int iMaxSpace){_iMaxUpgradeInventory = iMaxSpace;}

int shopgame::getCurrentUpgradeInventoryFlag(){return _iCurrentUpgradeInventory;}

ShopResult shopgame::buyUpgradeInventoryFlags(player* ptrPlayer) {
    if(_iCurrentUpgradeInventory == _iMaxUpgradeInventory) return ShopResult::maxSoldOutLimit;
    if(ptrPlayer->getMoney() >= _iCostUpgradeInventory)
    {
        // Покупаем товар
        int iNewMaxCountFlags {ptrPlayer->getMaxCountFlags() + 1};
        ptrPlayer->setMaxCountFlagsStart(iNewMaxCountFlags);

        _iCurrentUpgradeInventory++;

        // Вычитаем деньги
        int iNewMoneyCount {ptrPlayer->getMoney() - _iCostUpgradeInventory};
        ptrPlayer->setMoneyStart(iNewMoneyCount);
        return ShopResult::success;
    } else return ShopResult::notEnoughMoney;
}

int shopgame::getCostScanner(){return _iCostScanner;}
void shopgame::setCostScanner(int iCost) {_iCostScanner=iCost;}

int shopgame::getCostUpgradeScanner(){return _iCostRadiusScanner;}
void shopgame::setCostUpgradeScanner(int iCost){_iCostRadiusScanner = iCost;}

int shopgame::getMaxUpgradeScanner(){return _iMaxRadiusScanner;}
void shopgame::setMaxUpgradeScanner(int iCost){_iMaxRadiusScanner = iCost;}

int shopgame::getCurrentUpgradeScanner() {return _iCurrentRadiusScanner;}

ShopResult shopgame::buyBombScanner(player* ptrPlayer) {
    if (ptrPlayer->getScannerCount() == ptrPlayer->getMaxCountScanner()) return ShopResult::noInventorySpace;
    if(ptrPlayer->getMoney() >= _iCostScanner)
    {
        // Покупаем товар
        int iNewMaxCountScanner {ptrPlayer->getScannerCount() + 1};
        ptrPlayer->setScannerCount(iNewMaxCountScanner);

        // Вычитаем деньги
        int iNewMoneyCount {ptrPlayer->getMoney() - _iCostScanner};
        ptrPlayer->setMoneyStart(iNewMoneyCount);
        return ShopResult::success;
    } else return ShopResult::notEnoughMoney;
}

ShopResult shopgame::buyIncreaseRadiusScanner(player* ptrPlayer) {
    if (_iCurrentRadiusScanner == _iMaxRadiusScanner) return ShopResult::maxSoldOutLimit;
    if(ptrPlayer->getMoney() >= _iCostRadiusScanner)
    {
        // Покупаем товар
        int iNewMaxCountScanner {ptrPlayer->getRadiusScanner() + 1};
        ptrPlayer->setRadiusScanner(iNewMaxCountScanner);

        _iCurrentRadiusScanner++;

        // Вычитаем деньги
        int iNewMoneyCount {ptrPlayer->getMoney() - _iCostRadiusScanner};
        ptrPlayer->setMoneyStart(iNewMoneyCount);
        return ShopResult::success;
    } else return ShopResult::notEnoughMoney;
}

int shopgame::getCostUpgradeInventoryScanner(){return _iCostUpgradeInventoryScanner;}
void shopgame::setCostUpgradeInventoryScanner(int iCost){_iCostUpgradeInventoryScanner = iCost;}

int shopgame::getMaxUpgradeInventoryScanner(){return _iMaxUpgradeInventoryScanner;}
void shopgame::setMaxUpgradeInventoryScanner(int iMaxSpace){_iMaxUpgradeInventoryScanner = iMaxSpace;}

int shopgame::getCurrentUpgradeInventoryScanner(){return _iCurrentUpgradeInventoryScanner;}

ShopResult shopgame::buyUpgradeInventoryScanner(player* ptrPlayer) {
    if(_iCurrentUpgradeInventoryScanner == _iMaxUpgradeInventoryScanner) return ShopResult::maxSoldOutLimit;
    if(ptrPlayer->getMoney() >= _iCostUpgradeInventoryScanner)
    {
        // Покупаем товар
        int iNewMaxCountFlags {ptrPlayer->getMaxCountScanner() + 1};
        ptrPlayer->setMaxCountScanner(iNewMaxCountFlags);

        _iCurrentUpgradeInventoryScanner++;

        // Вычитаем деньги
        int iNewMoneyCount {ptrPlayer->getMoney() - _iCostUpgradeInventoryScanner};
        ptrPlayer->setMoneyStart(iNewMoneyCount);
        return ShopResult::success;
    } else return ShopResult::notEnoughMoney;
}

int shopgame::getCostOpenRandBomb() {return _iCostOpenRandBomb;}
void shopgame::setCostOpenRandBomb(int iCost) {_iCostOpenRandBomb = iCost;}

int shopgame::getMaxOpenRandBomb() {return _iMaxOpenRandBomb;}
void shopgame::setMaxCountOpenRandBomb(int iMaxCount){_iMaxOpenRandBomb = iMaxCount;}

int shopgame::getCurrentOpenRandBomb() {return _iCurrentOpenUsed;}

ShopResult shopgame::buyOpenRandBomb(player* ptrPlayer) {
    if(_iCurrentOpenUsed == _iMaxOpenRandBomb) return ShopResult::maxSoldOutLimit;
    if(ptrPlayer->getMoney() >= _iCostOpenRandBomb)
    {
        // Покупаем товар
        _iCurrentOpenUsed++;

        // Вычитаем деньги
        int iNewMoneyCount {ptrPlayer->getMoney() - _iCostOpenRandBomb};
        ptrPlayer->setMoneyStart(iNewMoneyCount);
        return ShopResult::success;
    } else return ShopResult::notEnoughMoney;
}


