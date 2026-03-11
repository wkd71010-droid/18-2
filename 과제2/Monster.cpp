#include "Monster.h"

Monster::Monster(string name) {
    this->name = name;

    level = 1;
    HP = 0;
    MP = 0;
    power = 0;
    defence = 0;
    accuracy = 0;
    speed = 0;
}

Monster::~Monster() {
}

void Monster::takeDamage(int damage) {
    HP -= damage;
    if (HP < 0) {
        HP = 0;
    }
}

bool Monster::isDead() {
    return HP <= 0;
}


void Monster::printMonsterStatus() {
    cout << "===== Monster Status =====" << endl;
    cout << "name : " << name << endl;
    cout << "level : " << level << endl;
    cout << "HP : " << HP << endl;
    cout << "MP : " << MP << endl;
    cout << "power : " << power << endl;
    cout << "defence : " << defence << endl;
    cout << "accuracy : " << accuracy << endl;
    cout << "speed : " << speed << endl;
    cout << "==========================" << endl;
}

string Monster::getName() {
    return name;
}

int Monster::getLevel() {
    return level;
}

int Monster::getHP() {
    return HP;
}

int Monster::getMP() {
    return MP;
}

int Monster::getPower() {
    return power;
}

int Monster::getDefence() {
    return defence;
}

int Monster::getAccuracy() {
    return accuracy;
}

int Monster::getSpeed() {
    return speed;
}

void Monster::setName(string name) {
    this->name = name;
}

void Monster::setLevel(int level) {
    this->level = level;
}

void Monster::setHP(int HP) {
    this->HP = HP;
}

void Monster::setMP(int MP) {
    this->MP = MP;
}

void Monster::setPower(int power) {
    this->power = power;
}

void Monster::setDefence(int defence) {
    this->defence = defence;
}

void Monster::setAccuracy(int accuracy) {
    this->accuracy = accuracy;
}

void Monster::setSpeed(int speed) {
    this->speed = speed;
}