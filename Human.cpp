#include "Human.h"
#include <iostream>

Human::Human(std::string name) : Player(name) {
}

Human::Human() : Player("Human") {
    
}

char Human::makeMove() {
    std::cout << "Enter move:";
    std::cin >> move;
    return move;
}

