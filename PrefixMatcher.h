#pragma once
#include <string>

struct trieNode {
    trieNode* children[2];
    int routerNum;
    trieNode();
};

class PrefixMatcher {
public:
    PrefixMatcher();
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);

private:
    trieNode* root;
};

