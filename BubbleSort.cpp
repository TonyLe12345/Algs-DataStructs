#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    for (int i = 0; i < list.size() - 1; i++) {
        for (int j = 0; j < i; j++) {
            if (list.at(j) > list.at(j+1)) {
                int temp = list.at(j);
                list.at(j) = list.at(j+1);
                list.at(j) = temp;
            }
        }
    }
    return list;
}