#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates < 2 || numCrates > 10000 || loadSize < 1) {
        // || loadSize > (numCrates - 1
        return 0;
    }
    // if (numCrates == 2) {
    //     if (loadSize == 2) {
    //         return 1;
    //     } else {
    //         return 2;
    //     }
    // }
    if (numCrates <= loadSize) {
        return 1;
    }
    if (numCrates % 2 == 1) {
        int crates = (numCrates-1) / 2;
        return numTrucks(crates + 1, loadSize) + numTrucks(crates, loadSize);
    } else {
        int crates = numCrates / 2;
        return numTrucks(crates, loadSize) + numTrucks(crates, loadSize);
    }
    
    // int halfofCrates = numCrates / 2; //divding floors the value
    // int secondHalfofCrates = numCrates - halfofCrates; //deals with odds
    // return numTrucks(halfofCrates, loadSize) + numTrucks(secondHalfofCrates, loadSize);
}