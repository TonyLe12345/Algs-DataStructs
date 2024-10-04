#pragma once
#include "Trie.h"
#include <vector>
#include <string>

class Autocomplete {
private:
    Node* root;

public:
    Autocomplete();
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);
    void findSuggestions(Node* node, std::string current, std::vector<std::string>& suggestions);
};


