#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster;

class Player {
public:
    Player(string nickname);
    virtual ~Player();

    virtual void attack(Monster* monster) = 0;

    void printPlayerStatus();
    void takeDamage(int damage);
    bool isDead();

    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    void setJobName(string job_name);
    void setNickname(string nickname);
    void setLevel(int level);
    void setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;

   

};