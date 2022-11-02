#include <iostream>
#include "GameManager.h"
#include "Player.h"
using namespace std;

GameManager::GameManager(Player player1, Player player2) : player1(player1),player2(player2){}
void GameManager::play(){
    if(player1.playerType=="H"){
        char move;
        cout<<"Kamien (R), papier (P), nozyce (S)? ";
        cin>>move;
        move=toupper(move);
        switch (move) {
            case 'R':
                player1.rock=true;
                player1.move="kamien";
                break;
            case 'P':
                player1.paper=true;
                player1.move="papier";
                break;
            case 'S':
                player1.scissors=true;
                player1.move="nozyczki";
                break;
            default:
                cout<<"Nieznane polecenie!"<<endl;
        }
    }
    if(player2.playerType=="H"){
        char move;
        cout<<"Kamien (R), papier (P), nozyce (S)? ";
        cin>>move;
        move=toupper(move);
        switch (move) {
            case 'R':
                player2.rock=true;
                player2.move="kamien";
                break;
            case 'P':
                player2.paper=true;
                player2.move="papier";
                break;
            case 'S':
                player2.scissors=true;
                player2.move="nozyczki";
                break;
            default:
                cout<<"Nieznane polecenie!"<<endl;
        }
    }
    cout<<"W grze bierze udzial "<<player1.name<< " i "<<player2.name<<endl;
    cout<<player1.name<<" wybral "<<player1.move<<endl;
    cout<<player2.name<<" wybral "<<player2.move<<endl;
    if(player1.rock){
        if(player2.rock)cout<<"Gra konczy sie remisem!";
        if(player2.paper)cout<<"Gra konczy sie zwyciestwem "<<player2.name;
        if(player2.scissors)cout<<"Gra konczy sie zwyciestwem "<<player1.name;
    }
    if(player1.paper){
        if(player2.rock)cout<<"Gra konczy sie zwyciestwem "<<player1.name;
        if(player2.paper)cout<<"Gra konczy sie remisem!";
        if(player2.scissors)cout<<"Gra konczy sie zwyciestwem "<<player2.name;
    }
    if(player1.scissors){
        if(player2.rock)cout<<"Gra konczy sie zwyciestwem "<<player2.name;
        if(player2.paper)cout<<"Gra konczy sie zwyciestwem "<<player1.name;
        if(player2.scissors)cout<<"Gra konczy sie remisem!";
    }
}