#include "PrefixMatcher.h"

TrieNode::TrieNode() {
    int routerNumber = -1;
    for (int i = 0; i < 2; i++) {
        children[i] = nullptr;
    }
}

PrefixMatcher::PrefixMatcher() {
    this->root = new TrieNode();
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* node = root;
    int selectedRouter = -1;
    for (int i = 0; i < networkAddress.size(); i++) {
    int number = networkAddress[i] - '0';
    if (node->children[number] == false) {
        break;
    }
    node = node->children[number];
    if (node->routerNum != -1) {
        selectedRouter = node->routerNum;
    }
}
    return selectedRouter;
}

void PrefixMatcher::insert(std::string address, int routerNum) {
    TrieNode* node = root;

    for (int i = 0; i < address.size(); i++) {
    int number = address[i] - '0';
        if (!node->children[number]) {
            node->children[number] = new TrieNode();
        }
    node = node->children[number];
    }
    node->routerNum = routerNum;
}
