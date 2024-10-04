#include "Autocomplete.h"

Autocomplete::Autocomplete(/* args */) {
    root = new Trie;
}
std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    Node* currentNode = root->getRoot();
    for (int i = 0; i < partialWord.size(); i++) {
        currentNode = currentNode->nextLetter(partialWord[i]);
        if (currentNode == nullptr) {
            return {};  // No suggestions if partial word not found
        }
    }
    std::vector<std::string> suggestions;
    findwords(currentNode, suggestions);
    return suggestions;
}  // return the known words that start with partialWord

void findwords(Node* currentNode, std::vector<std::string>& suggestions) {
    if (currentNode->returnEndWord()) {
        suggestions.push_back(currentNode->returnData());
    }

    for (int i = 0; i < 26; i++) {
        if (currentNode->nextLetter(i + 'a') != nullptr) {
            findwords(currentNode->nextLetter(i + 'a'), suggestions);
        }
    }
}

void Autocomplete::insert(std::string word) {
    Node* currentNode = root->getRoot();
    for (int i = 0; i < word.size(); i++) {
        if (currentNode->nextLetter(word[i]) == nullptr) {
            currentNode->insert(word[i]);
        }
        currentNode = currentNode->nextLetter(word[i]);
    }
    currentNode->endWord();
} // add a word to the known words