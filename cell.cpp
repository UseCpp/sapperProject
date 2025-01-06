#include "cell.h"

cell::cell()
    : _hasBomb{false}
    , _hasFlag{false}
    , _hasShop{false}
    , _isRevealed{false}
    , _isStart{false}
    , _isExit{false}
    , _isVisibleBomb{false} {}

void cell::placeBomb() {_hasBomb = true;}
bool cell::containsBomb() const {return _hasBomb;}
void cell::setVisibleBomb() {_isVisibleBomb = true;}
bool cell::isOpenedBomb() const {return _isVisibleBomb;}

void cell::toggleFlag() {_hasFlag = !_hasFlag;}
bool cell::isFlagged() const {return _hasFlag;}

bool cell::isStartCell() const {return _isStart;}
void cell::setStart() {_isStart = true;}
void cell::setExit() {_isExit = true;}
bool cell::isExitCell() const {return _isExit;}

void cell::setShop() {_hasShop = true;}
bool cell::isHasShop() const{return _hasShop;}

bool cell::isOpened() const {return _isRevealed;}
void cell::reveal() {_isRevealed = true;}
