#include "Monkey.h"

Monkey::Monkey() {
    this->weakness.push_back("Ninja");
    this->weakness.push_back("Robot");
}

std::string Monkey::getMove() {
    return "Monkey";
};