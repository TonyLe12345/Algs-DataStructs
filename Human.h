#include "Player.h"
#include "MoveCreator.h"
#include <string>
#pragma once

class Human : public Player
{
private:
    
public:
    Human(std::string name);
    Human();
    Move* makeMove();
};
