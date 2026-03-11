#include "Player.h"

Player::Player(string nickname) {
    this->nickname = nickname;
    job_name = "Beginer";

    level = 1;
    HP = 50;
    MP = 50;
    power = 10;
    defence = 10;
    accuracy = 10;
    speed = 10;
}
Player::~Player() {

}

void Player::takeDamage(int damage) {
    HP -= damage;
    if (HP < 0) {
        HP = 0;
    }
}

bool Player::isDead() {
    return HP <= 0;
}

void Player::printPlayerStatus() {
    cout << "===== My Status =====" << endl;
    cout << "nickname : " << nickname << endl;
    cout << "job : " << job_name << endl;
    cout << "level : " << level << endl;
    cout << "HP : " << HP << endl;
    cout << "MP : " << MP << endl;
    cout << "damage : " << power << endl;
    cout << "defensive : " << defence << endl;
    cout << "accuracy rate : " << accuracy << endl;
    cout << "speed : " << speed << endl;
    cout << "=========================" << endl;
}

    string Player::getJobName() {
        return job_name;
    }

    string Player::getNickname() {
        return nickname;
    }

    int Player::getLevel() {
        return level;
    }

    int Player::getHP() {
        return HP;
    }

    int Player::getMP() {
        return MP;
    }

    int Player::getPower() {
        return power;
    }

    int Player::getDefence() {
        return defence;
    }

    int Player::getAccuracy() {
        return accuracy;
    }

    int Player::getSpeed() {
        return speed;
    }

    void Player::setJobName(string job_name) {
        this->job_name = job_name;
    }

    void Player::setNickname(string nickname) {
        this->nickname = nickname;
    }

    void Player::setLevel(int level) {
        this->level = level;
    }

    void Player::setHP(int HP) {
        this->HP = HP;
    }

    void Player::setMP(int MP) {
        this->MP = MP;
    }

    void Player::setPower(int power) {
        this->power = power;
    }

    void Player::setDefence(int defence) {
        this->defence = defence;
    }

    void Player::setAccuracy(int accuracy) {
        this->accuracy = accuracy;
    }

    void Player::setSpeed(int speed) {
        this->speed = speed;
    }

