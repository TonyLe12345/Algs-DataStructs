#ifndef TRIE
#define TRIE
#include "Node.h"

#include <vector>

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node("");
    }


    Node *getRoot() {
        return root;
    }
};

#endif

