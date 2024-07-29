#include "Computer.h"
#include "Player.h"
#include "Rock.h"

Computer::Computer() : Player("Computer") {
}

Move* Computer::makeMove() {
    return new Rock;
}