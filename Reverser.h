#include <string>

class Reverser
{
private:
    int reverseDigitHidden(int value, int newvalue);
    std::string reverseStringHidden(std::string characters, std::string newWord);
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
};


