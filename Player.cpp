#include "Player.h"
#include "move.h"
#include <string>

Player::Player(std::string name) : name(name) {
    move = new Move;
};

std::string Player::getName() {
    return name;
};



