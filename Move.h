#include <vector>
#include <string>
#pragma once

class Move
{
protected:
    std::vector <std::string> weakness;
public:
    virtual std::vector <std::string> getWeakness();
    virtual std::string getMove();
    bool compareWeakness(std::string playerMove);
};


