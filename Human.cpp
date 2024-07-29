#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
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
    } 
    return nullptr;
}
