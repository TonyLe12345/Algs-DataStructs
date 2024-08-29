#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec {8,0,5,2,9,3,1,4,6,7};
    // Sort* Bubble = new BubbleSort;
    // std::vector<int> vect = Bubble->sort(vec);

    Sort* Quickly = new QuickSort;
    std::vector<int> vecto = Quickly->sort(vec);

    for (int i = 0; i < vec.size(); i++) {
        std::cout<<vecto.at(i);
    }
    std::cout<<std::endl;

}