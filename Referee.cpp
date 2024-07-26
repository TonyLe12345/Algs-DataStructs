#include "Referee.h"
#include "move.h"

Referee::Referee()
{
}

Player* Referee::refGame(Player* player1, Player* player2)
{
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->value > move1->value) {
        return player1;
    } else if (move1->value < move1->value) {
        return player2;
    } else {
        return nullptr;
    }

}