#include "Robot.h"

Robot::Robot() {
    this->weakness.push_back("Pirate");
    this->weakness.push_back("Monkey");
}

std::string Robot::getName() {
    return "Robot";
};
