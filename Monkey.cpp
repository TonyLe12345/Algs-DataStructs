#include "Monkey.h"

Monkey::Monkey() {
    this->weakness.push_back("Pirate");
    this->weakness.push_back("Zombie");
}

std::string Monkey::getName() {
    return "Monkey";
};