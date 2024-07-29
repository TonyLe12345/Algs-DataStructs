#include "Zombie.h"

Zombie::Zombie() {
    this->weakness.push_back("Robot");
    this->weakness.push_back("Ninja");
}

std::string Zombie::getName() {
    return "Zombie";
};