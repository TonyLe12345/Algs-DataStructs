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
    return MoveCreator::CreateMove(playerMove);
}
