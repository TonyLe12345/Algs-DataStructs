#include "Paper.h"

Paper::Paper() {
    this->weakness.push_back("Scissors");
}

std::string Paper::getMove() {
    return "Paper";
};

std::vector <std::string> Paper::getWeakness() {
    return weakness;
}