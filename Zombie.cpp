#include "Zombie.h"

Zombie::Zombie() {
    this->weakness.push_back("Pirate");
    this->weakness.push_back("Monkey");
}

std::string Zombie::getName() {
    return "Zombie";
};