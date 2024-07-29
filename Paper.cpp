#include "Paper.h"

Paper::Paper() {
    this->weakness.push_back("Scissors");
}

std::string Paper::getName() {
    return "Paper";
};

