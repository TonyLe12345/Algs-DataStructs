#include <vector>
#include <string>
#pragma once

class Move
{
protected:
    std::vector <std::string> weakness;
public:
    std::vector <std::string> getWeakness();
    bool compareWeakness(std::string playerMove);
    virtual std::string getMove() = 0;
};


