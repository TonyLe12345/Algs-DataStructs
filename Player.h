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
    virtual Move* makeMove();
    std::string getName();
};