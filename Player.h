#include <string>
#include "Move.h"
#pragma once

class Player
{
protected:
    std::string name;
    Move* move;
public:
    Player(std::string name);
    std::string getName();
    virtual Move* makeMove() = 0;
};