#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Referee ref;
    Player* player1 = new Human("player1");
    Player* player2 = new Human("player2");
    Player* player3 = new Computer;
    Player* ptr = ref.refGame(player1, player2);
    if (ptr == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << ptr->getName() << " Wins." << std::endl;
    }
    return 0;
}
