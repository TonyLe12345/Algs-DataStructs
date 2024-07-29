#include "Referee.h"

Referee::Referee()
{
}

Player* Referee::refGame(Player* player1, Player* player2)
{
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->compareWeakness(move2->getName())) {
        return player2;
    } else if (move2->compareWeakness(move1->getName())) {
        return player1;
    } else {
        return nullptr;
    }
}