#ifndef PLAYER_H
#define PLAYER_H

#include "cell.h"
#include "gamefield.h"
#include "savemanager.h"
#include <QDebug>
//TODO: что с названиями?
//TODO: опять английские комментарии
enum class playerEventResult {
    success,
    undoEvent,
    dontHaveItem,
    fail
};

class player
{
public:
    player(int iX, int iY);
    /* Life Player */
private:
    bool _bIsLive;
public:
    bool isLivePlayer();

    /* Shop Settings */
private:
    bool _bAvailableShop;
public:
    bool getAvailableShop();

    /* Money Settings */
private:
    int _iMoney;
    int _iCostCell;
public:
    int getMoney();

    void setMoneyStart(int iMoney);
    void setCostCell(int iCostCell);

    /* Player Exit */
private:
    bool _bAvailableExit;
public:
    bool getAvailableExit();
    /* Player Coords */
private:
    int _iX;
    int _iY;
public:
    int getX() const;
    int getY() const;

    void move(int dx, int dy);
    void interactWithCell(cell& currentCell);
    /* Player Flag */
private:
    int _iCountFlags;
    int _iMaxCountFlags;
public:
    int getCountFlags();
    int getMaxCountFlags();

    void setFlagsStart(int iFlags);
    void setMaxCountFlagsStart(int iMax);
public:
    playerEventResult placeFlag(gameField* ptrGamefield);

    /* Player Scaner */
private:
    int _iCountScanner;
    int _iRadiusScanner;
    int _iMaxCountScanner;

public:
    void setScannerCount(int iCount);
    int getScannerCount();

    void setRadiusScanner(int iRadius);
    int getRadiusScanner();

    void setMaxCountScanner(int iCount);
    int getMaxCountScanner();

    playerEventResult useScanner(gameField* ptrGameField, std::vector<std::pair<int, int>>& iBombCells);

    /* Player Use Open Rand Bomb */
public:
    playerEventResult useOpenRandBomb(gameField* ptrGameField, std::pair<int, int>& iBombCoordinates);
};

#endif // PLAYER_H
