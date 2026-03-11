#include "Slime.h"
#include "Player.h"
#include <iostream>
using namespace std;

Slime::Slime(string name) : Monster(name) {

	name = "Slime";

    level = 1;
    HP = 100;
    MP = 10;
    power = 30;
    defence = 0;
    accuracy = 10;
    speed = 10;
}

void Slime::attack(Player* player) {
    cout << "Body Attack!!" << endl;
    int damage = power - player->getDefence();
    if (damage < 0) damage = 0;
    player->takeDamage(damage);
}