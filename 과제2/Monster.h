#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player;

class Monster {
public:
	Monster(string name);
	virtual ~Monster();

    virtual void attack(Player* player) = 0;
    void printMonsterStatus();
    void takeDamage(int damage);
    bool isDead();

    string getName();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    void setName(string name);
    void setLevel(int level);
    void setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string name;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};

