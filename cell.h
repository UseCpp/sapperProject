#ifndef CELL_H
#define CELL_H

class cell
{
private:
    bool _hasBomb;         // Наличие бомбы в ячейке
    bool _isVisibleBomb;   // Видимость бомбы
    bool _hasFlag;         // Наличие флажка на ячейке
    bool _hasShop;         // Наличие магазина на ячейке
    bool _isRevealed;      // Открыта ли ячейка
    bool _isStart;         // Является ли клетка стартовой
    bool _isExit;          // Является ли клетка выходом

public:
    cell();

    void placeBomb();
    void setVisibleBomb();
    bool isOpenedBomb() const;
    bool containsBomb() const;

    void reveal();
    bool isOpened() const;

    void setStart();
    void setExit();

    void setShop();
    bool isHasShop() const;

    void toggleFlag();

    bool isFlagged() const;

    bool isStartCell() const;
    bool isExitCell() const;
};

#endif // CELL_H
