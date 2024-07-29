#include "Move.h"


class Rock : public Move
{
private:
    /* data */
public:
    Rock();
    std::string getMove();
};

Rock::Rock() {
    this->weakness.push_back("paper");
}

std::string Rock::getMove() {
    return "Rock";
};

Rock::~Rock()
{
}
