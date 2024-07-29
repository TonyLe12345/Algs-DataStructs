#include "Scissors.h"

Scissors::Scissors() {
    this->weakness.push_back("Rock");
}

std::string Scissors::getMove() {
    return "Scissors";
};

std::vector <std::string> Scissors::getWeakness() {
    return weakness;
}
