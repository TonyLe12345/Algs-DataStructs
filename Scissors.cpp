#include "Scissors.h"

Scissors::Scissors() {
    this->weakness.push_back("Rock");
}

std::string Scissors::getName() {
    return "Scissors";
};
