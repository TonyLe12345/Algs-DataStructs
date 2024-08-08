#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if (value<10) {
        return value;
    }
    return reverseDigitHidden(value, 0);
};

int Reverser::reverseDigitHidden(int value, int newValue) {
    if (value == 0) {
        return newValue;
    }
    //Shift line left (make space for new value)
    newValue = newValue*10;
    //find remainder
    int number = value % 10;
    //Subtract remainder and shift value to right
    value = value-number;
    value = value/10;
    newValue = newValue + number;
    return reverseDigitHidden(value, newValue);
}

std::string Reverser::reverseString(std::string characters) {
    std::string newWord = "";
    return reverseStringHidden(characters, newWord);
}

std::string Reverser::reverseStringHidden(std::string characters, std::string newWord) {
    if (characters.length() == 0) {
        return newWord;
    }
    char letter = characters[characters.length()-1];
    newWord += letter;
    characters.pop_back();
    return reverseStringHidden(characters, newWord);
}
