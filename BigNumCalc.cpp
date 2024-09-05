#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> numlist;
    for (int i=0; i<numString.length(); i++) {
        numlist.push_back(int(numString[i]));
    }
    return numlist;
}
std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    int carry = 0;
    std::list<int> numlist;

    std::list<int>::reverse_iterator it1 = num1.rbegin();
    std::list<int>::reverse_iterator it2 = num2.rbegin();

    for(; it1 != num1.rend() && it2 != num2.rend(); ++it1, ++it2) {
        int number = *it1 + *it2 + carry;
        numlist.push_front(number%10);
        carry=(number-number%10)/10;
    }
    return numlist;
}
std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    int carry = 0;
    std::list<int> numlist;
    
    std::list<int>::reverse_iterator it1 = num1.rbegin();
    std::list<int>::reverse_iterator it2 = num2.rbegin();

    for(; it1 != num1.rend() && it2 != num2.rend(); ++it1, ++it2) {
        if (*it1 - *it2 - carry < 0) {
            int number = 10 + *it1 - *it2 - carry;
            numlist.push_front(number);
            carry = 1;
        } else {
            int number = *it1 - *it2 - carry;
            numlist.push_front(number);
            carry=0;
        }
    }
    return numlist;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    int carry = 0;
    std::list<int> numlist;
    for (std::list<int>::reverse_iterator rit=num1.rbegin(); rit!=num1.rend(); ++rit) {
    int number = *rit * num2.back() + carry;
    numlist.push_front(number%10);
    carry=(number-number%10)/10;
    }
    return numlist;
}