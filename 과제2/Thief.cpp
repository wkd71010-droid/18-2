#include "Thief.h"
#include <iostream>
#include "Monster.h"

using namespace std;

Thief::Thief(string nickname) : Player(nickname) {

    job_name = "Thief";

    cout << "* change one's job as a Thief." << endl;
    HP = 50;
    MP = 40;
    power = 30;
    defence = 20;
    accuracy = 50;
    speed = 80;
}


void Thief::attack(Monster* monster) {

    cout << "* to swing a dagger." << endl;
    int damage = power - monster->getDefence();
    if (damage < 0) damage = 0;
    monster->setHP(monster->getHP() - damage);

}