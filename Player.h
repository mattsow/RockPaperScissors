#ifndef ROCKPAPERSSCISSORS_PLAYER_H
#define ROCKPAPERSSCISSORS_PLAYER_H
#include <string>

using namespace std;

class Player {
public:
    bool rock=false;
    bool paper=false;
    bool scissors=false;
    string name;
    string move;
    string playerType;
};

class HumanPlayer:public Player{
public:
    HumanPlayer(string name, string lastname);
};

class MonkeyPlayer:public Player{
public:
    MonkeyPlayer(string name);
};

class DonkeyPlayer:public Player{
public:
    DonkeyPlayer(string name);
};

class ElephantPlayer:public Player{
public:
    ElephantPlayer(string name);
};

#endif
