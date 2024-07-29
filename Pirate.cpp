#include "Pirate.h"

Pirate::Pirate() {
    this->weakness.push_back("Ninja");
    this->weakness.push_back("Zombie");
}

std::string Pirate::getName() {
    return "Pirate";
};