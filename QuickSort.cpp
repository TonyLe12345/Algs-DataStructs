#include "QuickSort.h"
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    Quicklysort(list, 0, list.size() - 1);
    return list;
};


void QuickSort::Quicklysort(std::vector<int> &list, int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot_index = start;
    
    if ((end - start) >= 3) {
        int temp = list.at(start + 2);
        list.at(start + 2) = list.at(end);
        list.at(end) = temp;
    }

    int pivot = list.at(end);
    

    for (int i = start; i < end; i++) {
        if (list.at(i) < pivot) {
            int temp = list.at(pivot_index);
            list.at(pivot_index) = list.at(i);
            list.at(i) = temp; 
            pivot_index++;
 
        }
    }
    
    int temp = list.at(pivot_index);
    list.at(pivot_index) = list.at(end);
    list.at(end) = temp;
    
    Quicklysort(list, start, pivot_index - 1);
    Quicklysort(list, pivot_index + 1, end);
}