#include "Move.h"

bool Move::compareWeakness(std::string playerMove) {
    for (int i=0; i < weakness.size(); i++) {
        if (weakness[i] == playerMove) {
            return true;
        }
    }
    return false;
};