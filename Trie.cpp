#include "Trie.h"

bool Node::isLetter(char letter){
    return (children[letter - 'a'] != nullptr);
}

void Node::addNode(char letter){
    children[letter - 'a'] = new Node();
}

Node* Node::get(char letter){
    return children[letter - 'a'];
}

void Node::setEnd(){
    wordEnd = true;
}

bool Node::End(){
    return wordEnd;
}