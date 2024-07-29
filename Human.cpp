#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {
}

Human::Human() : Player("Human") {
    
}

Move* Human::makeMove() {
    std::cout << "Enter move:";
    std::string playerMove;
    std::cin >> playerMove;
    if (playerMove == "Rock") {
        this->move = new Rock;
        return move;
    } else if (playerMove == "Paper") {
        this->move = new Paper;
        return move;
    } else if (playerMove == "Scissors") {
        this->move = new Scissors;
        return move;
    } else if (playerMove == "Robot") {
        this->move = new Robot;
        return move;
    } else if (playerMove == "Ninja") {
        this->move = new Ninja;
        return move;
    } else if (playerMove == "Zombie") {
        this->move = new Zombie;
        return move;
    } else if (playerMove == "Pirate") {
        this->move = new Pirate;
        return move;
    } else if (playerMove == "Monkey") {
        this->move = new Monkey;
        return move;
    }
    
    return nullptr;
}
