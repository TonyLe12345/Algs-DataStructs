#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node{
    Node* children[26];
    bool wordEnd = false;
    bool isLetter(char letter);
    void addNode(char letter);
    Node* get(char letter);
    void setEnd();
    bool End();
};

class Trie{
    private:
        Node* root;
    public:
        Trie();
        void insert(string value);
        bool search(string value);
};

