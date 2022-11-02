#include <iostream>
#include <string>
#include <cmath>
#include "Player.h"
using namespace std;
HumanPlayer::HumanPlayer(string name, string lastname){
    Player::name=(name+" "+lastname);
    Player::playerType="H";
}

MonkeyPlayer::MonkeyPlayer(string name){
    Player::name=name;
    Player::playerType="M";
    srand((unsigned)time(0));
    float rps=rand()%3;
    if(rps==0){
        Player::rock=true;
        Player::move="kamien";
    }
    else if(rps==1){
        Player::paper=true;
        Player::move="papier";
    }
    else if(rps==2){
        Player::scissors=true;
        Player::move="nozyczki";
    }
}
DonkeyPlayer::DonkeyPlayer(string name){
    Player::name=name;
    Player::playerType="D";
    Player::rock=true;
    Player::move="kamien";
}
ElephantPlayer::ElephantPlayer(string name) {
    Player::name=name;
    Player::playerType="E";
    srand((unsigned)time(0));
    float rps=rand()%10;
    if(rps<=1){
        Player::rock=true;
        Player::move="kamien";
    }
    else if(rps>1 && rps<=5){
        Player::paper=true;
        Player::move="papier";
    }
    else if(rps>5){
        Player::scissors=true;
        Player::move="nozyczki";
    }
}
