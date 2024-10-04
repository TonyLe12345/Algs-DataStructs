#include "PrefixMatcher.h"

trieNode::trieNode() {
    routerNum = -1;
    for (int i = 0; i < 2; i++) {
        children[i] = nullptr;
    }
}

PrefixMatcher::PrefixMatcher() {
    this->root = new trieNode();
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    trieNode* node = root;
    int selectedRouter = -1;
    for (int i = 0; i < networkAddress.size(); i++) {
    int number = networkAddress[i] - '0';
    if (node->children[number] == 0) {
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
    trieNode* node = root;

    for (int i = 0; i < address.size(); i++) {
    int number = address[i] - '0';
        if (!node->children[number]) {
            node->children[number] = new trieNode();
        }
    node = node->children[number];
    }
    node->routerNum = routerNum;
}
