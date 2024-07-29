#include "Pirate.h"

Pirate::Pirate() {
    this->weakness.push_back("Monkey");
    this->weakness.push_back("Robot");
}

std::string Pirate::getName() {
    return "Pirate";
};