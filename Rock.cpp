#include "Rock.h"

Rock::Rock() {
    this->weakness.push_back("Paper");
}

std::string Rock::getMove() {
    return "Rock";
};
