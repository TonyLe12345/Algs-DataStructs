#include "MoveCreator.h"

Move* MoveCreator::CreateMove(std::string playerMove) {
    if (playerMove == "Rock") {
        return new Rock;
    } else if (playerMove == "Paper") {
        return new Paper;
    } else if (playerMove == "Scissors") {
        return new Scissors;
    } else if (playerMove == "Robot") {
        return new Robot;
    } else if (playerMove == "Ninja") {
        return new Ninja;
    } else if (playerMove == "Zombie") {
        return new Zombie;
    } else if (playerMove == "Pirate") {
        return new Pirate;
    } else if (playerMove == "Monkey") {
        return new Monkey;
    } else {
        return nullptr;
    }
}

