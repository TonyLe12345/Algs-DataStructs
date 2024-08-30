#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

int main() {
    std::string input;
    std::vector<int> vec;

    std::getline (std::cin, input);
    std::istringstream my_stream(input);

    int n;

    while (my_stream >> n) {
        vec.push_back(n);
    }

    Sort* Quickly = new QuickSort;
    std::vector<int> vecto = Quickly->sort(vec);

    RecursiveBinarySearch detective;
    bool boolean = detective.search(vecto,1);
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