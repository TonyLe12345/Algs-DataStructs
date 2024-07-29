#include "Robot.h"

Robot::Robot() {
    this->weakness.push_back("Ninja");
    this->weakness.push_back("Zombie");
}

std::string Robot::getMove() {
    return "Robot";
};
