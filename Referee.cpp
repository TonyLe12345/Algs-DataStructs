#include "Referee.h"

Referee::Referee()
{
}

Player* Referee::refGame(Player* player1, Player* player2)
{
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    if (move1 == 'R') {
        if (move2 == 'R'){
            return nullptr;
        }
        if (move2 == 'P'){
            return player2;
        }
        if (move2 == 'S'){
            return player1;
        }
    }

    if (move1 == 'P') {
        if (move2 == 'R'){
            return player1;
        }
        if (move2 == 'P'){
            return nullptr;
        }
        if (move2 == 'S'){
            return player2;
        }
    }

    if (move1 == 'S') {
        if (move2 == 'R'){
            return player2;
        }
        if (move2 == 'P'){
            return player1;
        }
        if (move2 == 'S'){
            return nullptr;
        }
    }
    return nullptr;

}