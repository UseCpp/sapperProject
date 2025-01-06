#ifndef PLAYERPROFILE_H
#define PLAYERPROFILE_H

#include <string>

class PlayerProfile
{
public:
    PlayerProfile();

private:
    int _iExperience;
    int _iLevelPlayer;

    int _iLoseCount;// кт для сейвва отсюда
    int _iWinCount;
    std::string _iFastestGameTime;
public:
    int getPlayerXP();
    void setExpirience(int iXP);

    int getPlayerLvl();
    void setPlayerLvl(int iLvl);

    int getLose();
    void setLose(int i);
    void addLose();

    int getWin();
    void setWin(int i);
    void addWin();

    std::string getTime();
    void setTime(std::string sTime);
};

#endif // PLAYERPROFILE_H
