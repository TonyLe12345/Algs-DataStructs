#include "Ninja.h"

Ninja::Ninja() {
    this->weakness.push_back("Pirate");
    this->weakness.push_back("Zombie");
}

std::string Ninja::getMove() {
    return "Ninja";
};