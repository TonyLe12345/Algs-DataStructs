#include "Move.h"
#pragma once

class Scissors : public Move
{
private:
    /* data */
public:
    Scissors(/* args */);
    std::string getMove();
    std::vector <std::string> getWeakness();
};
