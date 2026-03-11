#include "Magician.h"
#include <iostream>
#include "Monster.h"

using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "Magician";
    cout << "* change one's job as a Magicion." << endl;
    HP = 20;
    MP = 80;
    power = 40;
    defence = 10;
    accuracy = 30;
    speed = 20;
}

void Magician::attack(Monster* monster) {
    cout << "* Fire magic firing" << endl;
    int damage = power - monster->getDefence();
    if (damage < 0) damage = 0;
    monster->takeDamage(damage);
}