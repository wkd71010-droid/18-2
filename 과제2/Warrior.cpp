#include "Warrior.h"
#include <iostream>
#include "Monster.h"
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {

    job_name = "Warrior";

    cout << "* change one's job as a Warrior." << endl;
    HP = 80;
    MP = 30;
    power = 20;
    defence = 50;
    accuracy = 30;
    speed = 20;
}

void Warrior::attack(Monster* monster) {

    cout << "* wield a sword." << endl;
    int damage = power - monster->getDefence();
    if (damage < 0) damage = 0;
    monster->setHP(monster->getHP() - damage);

}