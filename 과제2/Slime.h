#pragma once
#include "Player.h"
#include <string>
#include "Monster.h"

using namespace std;

class Slime : public Monster {
public:
    Slime(string name);
    void attack(Player* player) override;
};