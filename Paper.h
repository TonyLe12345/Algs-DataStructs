#include "Move.h"
#pragma once

class Paper : public Move
{
private:
    /* data */
public:
    Paper(/* args */);
    std::string getMove();
    std::vector <std::string> getWeakness();
};

