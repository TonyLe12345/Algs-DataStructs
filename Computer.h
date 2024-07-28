#include "Player.h"
#pragma once

class Computer : public Player
{
private:
    
public:
    Computer();
    virtual Move* makeMove();
};

