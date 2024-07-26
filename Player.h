#include <string>
#pragma once

class Player
{
protected:
    std::string name;
    char move;
public:
    Player(std::string name);
    virtual char makeMove() = 0;
    std::string getName();
};