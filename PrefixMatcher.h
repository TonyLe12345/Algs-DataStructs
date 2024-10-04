#pragma once
#include <string>

struct TrieNode {
    TrieNode* children[2];
    int routerNum;
    TrieNode();
};

class PrefixMatcher {
public:
    PrefixMatcher();
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);

private:
    TrieNode* root;
};

