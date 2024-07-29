#include "Referee.h"

Referee::Referee()
{
}

Player* Referee::refGame(Player* player1, Player* player2)
{
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    std::vector <std::string> player1Weakness = move1->getWeakness();
    std::vector <std::string> player2Weakness = move2->getWeakness();

    for (int i=0; i < player1Weakness.size(); i++) {
        if (player1Weakness[i] == move2->getMove()) {
            return player2;
        }
    }

    for (int i=0; i < player2Weakness.size(); i++) {
        if (player1Weakness[i] == move1->getMove()) {
            return player1;
        }
    }

}