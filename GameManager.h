#ifndef ROCKPAPERSSCISSORS_GAMEMANAGER_H
#define ROCKPAPERSSCISSORS_GAMEMANAGER_H
#include "Player.h"

class GameManager {
    Player player1;
    Player player2;
public:
    GameManager(Player player1, Player player2);
    void play();
};

#endif
