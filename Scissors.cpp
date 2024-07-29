#include "Scissors.h"

Scissors::Scissors() {
    this->weakness.push_back("Rock");
}

std::string Scissors::getMove() {
    return "Scissors";
};
