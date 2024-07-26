#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {
}

Human::Human() : Player("Human") {
    
}

Move* Human::makeMove() {
    std::cout << "Enter move:";
    std::cin >> moveOption;
    move->setMove(moveOption);
    return move;
}

