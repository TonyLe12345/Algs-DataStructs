#include "Rock.h"

Rock::Rock() {
    this->weakness.push_back("paper");
}

std::string Rock::getMove() {
    return "Rock";
};

std::vector <std::string> Rock::getWeakness() {
    return weakness;
}
