#include "Computer.h"
#include "Player.h"

Computer::Computer() : Player("Computer") {
    this->move = 'R';
}

char Computer::makeMove() {
    return move;
}