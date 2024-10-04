#include "Node.h"

Node::Node(std::string word) {
    this->data = word;
};
void Node::insert(char value) {
    if (childNodes[value - 'a'] == nullptr) {  
    Node* newNode = new Node(data + value); 
    childNodes[value - 'a'] = newNode;
}
}
std::string Node::returnData() {
    return data;
};
void Node::endWord() {
    this->wordEnd = true;
    return;
};
bool Node::returnEndWord() {
    return wordEnd;
}
Node* Node::nextLetter(char letter) {
    return childNodes[letter - 'a'];
}