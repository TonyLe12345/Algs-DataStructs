#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int number) {
    return searchhidden(list, number, 0, list.size() - 1);
}

bool RecursiveBinarySearch::searchhidden(std::vector<int> list, int number, int start, int end) {
    if (start > end) {
        return false;
    }

    int middle = start + (end - start) / 2 ;
    if (list.at(middle) == number) {
        return true;
    }

    if (number < list.at(middle)) {
        return searchhidden(list, number, start, middle - 1);
    } else {
        return searchhidden(list, number, middle + 1, end);
    }
}