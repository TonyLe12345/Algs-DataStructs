#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

int main() {
    Truckloads a;
    std::cout<<a.numTrucks(4, 2) << std::endl;
    Reverser r;
    std::cout<<r.reverseDigit(233)<< std::endl;
    std::cout<<r.reverseString("eggs")<< std::endl;

    return 0;
}