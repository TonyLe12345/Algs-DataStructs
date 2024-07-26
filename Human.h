#include "Player.h"
#include <string>
#pragma once

class Human : public Player
{
private:
    std::string moveOption;
public:
    Human(std::string name);
    Human();
    Move* makeMove();
};
