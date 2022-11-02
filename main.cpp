#include <iostream>
#include "Player.h"
#include "GameManager.h"
using namespace std;

int main() {
    MonkeyPlayer rafiki("PawianRafiki");
    ElephantPlayer dumbo("Dumbo");
    DonkeyPlayer klapouchy("Klapouchy");
    HumanPlayer janek("Jan", "Kowalski");
    GameManager mgr(dumbo, janek);
    mgr.play();
}
