#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec {1, 3, 5, 4, -5, 100, 7777, 2014};
    // Sort* Bubble = new BubbleSort;
    // std::vector<int> vect = Bubble->sort(vec);

    Sort* Quickly = new QuickSort;
    std::vector<int> vecto = Quickly->sort(vec);

    RecursiveBinarySearch detective;
    bool boolean = detective.search(vec,1);
    if (boolean == 1) {
        std::cout<< "true ";
    } else {
        std::cout<< "false ";
    }

    for (int i = 0; i < vec.size(); i++) {
        std::cout<<vecto.at(i) << " ";
    }
    std::cout<<std::endl;
    

}