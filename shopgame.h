#ifndef SHOPGAME_H
#define SHOPGAME_H

#include "player.h"

enum class ShopResult {
    success,
    noInventorySpace,
    notEnoughMoney,
    maxSoldOutLimit,
    fail
};

class shopgame
{
public:
    shopgame();

    /* Flags Settings */
private:
    int _iCostFlags;
public:
    int getCostFlags();
    void setCostFlag(int iCost);

    ShopResult buyFlags(player* ptrPlayer);

    /* Inventory Flag Settings */
private:
    int _iCostUpgradeInventory;
    int _iMaxUpgradeInventory;
    int _iCurrentUpgradeInventory;
public:
    int getCostUpgradeInventoryFlag();
    void setCostUpgradeInventoryFlag(int iCost);

    int getMaxUpgradeInventoryFlag();
    void setMaxUpgradeInventoryFlag(int iMaxSpace);

    int getCurrentUpgradeInventoryFlag();

    ShopResult buyUpgradeInventoryFlags(player* ptrPlayer);

    /* Scanner Settings */
private:
    int _iCostScanner;

    int _iCostRadiusScanner;
    int _iMaxRadiusScanner;
    int _iCurrentRadiusScanner;
public:
    int getCostScanner();
    void setCostScanner(int iCost);

    int getCostUpgradeScanner();
    void setCostUpgradeScanner(int iCost);

    int getMaxUpgradeScanner();
    void setMaxUpgradeScanner(int iCost);

    int getCurrentUpgradeScanner();

    ShopResult buyBombScanner(player* ptrPlayer);
    ShopResult buyIncreaseRadiusScanner(player* ptrPlayer);
private:
    int _iCostUpgradeInventoryScanner;
    int _iMaxUpgradeInventoryScanner;
    int _iCurrentUpgradeInventoryScanner;
public:
    int getCostUpgradeInventoryScanner();
    void setCostUpgradeInventoryScanner(int iCost);

    int getMaxUpgradeInventoryScanner();
    void setMaxUpgradeInventoryScanner(int iMaxSpace);

    int getCurrentUpgradeInventoryScanner();

    ShopResult buyUpgradeInventoryScanner(player* ptrPlayer);

    /* Open Random Bomb Settings*/
private:
    int _iCostOpenRandBomb;
    int _iMaxOpenRandBomb;
    int _iCurrentOpenUsed;
public:
    int getCostOpenRandBomb();
    void setCostOpenRandBomb(int iCost);

    int getMaxOpenRandBomb();
    void setMaxCountOpenRandBomb(int iMaxCount);

    int getCurrentOpenRandBomb();

    ShopResult buyOpenRandBomb(player* ptrPlayer);
};

#endif // SHOPGAME_H
