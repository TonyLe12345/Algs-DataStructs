#include <vector>
#include <string>
#include "Trie.h"

class Autocomplete
{
private:
    Trie* root;

public:
    Autocomplete(/* args */);
    std::vector<std::string> getSuggestions(std::string partialWord);  // return the known words that start with partialWord
    void insert(std::string word); // add a word to the known words
    ~Autocomplete();
};

