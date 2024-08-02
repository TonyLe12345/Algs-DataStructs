#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Ninja.h"
#include "Robot.h"
#include <string>


class MoveCreator
{
private:
    /* data */
public:
    static Move* CreateMove(std::string);
};

