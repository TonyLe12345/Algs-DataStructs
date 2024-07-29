#include "Player.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Ninja.h"
#include "Robot.h"
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
