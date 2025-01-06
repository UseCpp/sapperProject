#include "playerprofile.h"

PlayerProfile::PlayerProfile() {
    _iExperience=0;
    _iLevelPlayer=1;

    _iLoseCount=0;// кт для сейвва отсюда
    _iWinCount=0;
    _iFastestGameTime="00:00:00";
}

int PlayerProfile::getPlayerXP() {return _iExperience;}
void PlayerProfile::setExpirience(int iXP){_iExperience = iXP;}

int PlayerProfile::getPlayerLvl(){return _iLevelPlayer;}
void PlayerProfile::setPlayerLvl(int iLvl) {_iLevelPlayer = iLvl;}

int PlayerProfile::getLose(){return _iLoseCount;}
void PlayerProfile::setLose(int i){_iLoseCount = i;}
void PlayerProfile::addLose(){_iLoseCount++;}

int PlayerProfile::getWin(){return _iWinCount;}
void PlayerProfile::setWin(int i){_iWinCount = i;}
void PlayerProfile::addWin(){_iWinCount++;}

std::string PlayerProfile::getTime(){return _iFastestGameTime;}
void PlayerProfile::setTime(std::string sTime){_iFastestGameTime = sTime;}
