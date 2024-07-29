#include "Move.h"


class Rock : public Move
{
private:
    /* data */
public:
    Rock();
};

Rock::Rock() {
    this->move = "Rock";
    this->weakness.push_back("paper") ;
}

Rock::~Rock()
{
}
