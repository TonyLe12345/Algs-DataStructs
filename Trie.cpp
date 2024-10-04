#include "Trie.h"

Trie::Trie() {
    root = new Node("");
}


Node * Trie::getRoot() {
    return root;
}