#include "Archer.h"
#include <iostream>
#include "Monster.h"
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {

    job_name = "Archer";

    cout << "* change one's job as a Archer." << endl;
    HP = 50;
    MP = 40;
    power = 30;
    defence = 10;
    accuracy = 80;
    speed = 30;
}

void Archer::attack(Monster* monster) {

    cout << "* fire an arrow." << endl;
    int damage = power - monster->getDefence();
    if (damage < 0) damage = 0;
    monster->takeDamage(damage);

}