#include "Ninja.h"

Ninja::Ninja() {
    this->weakness.push_back("Robot");
    this->weakness.push_back("Monkey");
}

std::string Ninja::getName() {
    return "Ninja";
};