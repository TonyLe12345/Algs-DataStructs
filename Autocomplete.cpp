#include "Autocomplete.h"

Autocomplete::Autocomplete() : root(new Node()) {
}

void Autocomplete::insert(std::string word) {
    Node* node = root;
    for (int i = 0; i < word.size(); i++) {
        char letter = word[i];
        if (node->isLetter(letter) == false) {
            node->addNode(letter);
        }
        node = node->get(letter);
    }
    node->setEnd();
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> suggestions;
    Node* node = root;

    for (int i = 0; i < partialWord.size(); i++) {
        char letter = partialWord[i];
        if (node->isLetter(letter) == false) {
            return suggestions;
        }
        node = node->get(letter);
    }

    findSuggestions(node, partialWord, suggestions);

    return suggestions;
}

void Autocomplete::findSuggestions(Node* node, std::string current, std::vector<std::string>& suggestions) {
    if (node->End()) {
        suggestions.push_back(current);
    }

    for (int i = 0; i < 26; i++) {
        char letter = 'a' + i;
        if (node->isLetter(letter)) {
            findSuggestions(node->get(letter), current + letter, suggestions);
        }
    }
}
