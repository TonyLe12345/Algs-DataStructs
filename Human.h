#include "Player.h"
#include <string>
#pragma once

class Human : public Player
{
private:
    
public:
    Human(std::string name);
    Human();
    char makeMove();
};
