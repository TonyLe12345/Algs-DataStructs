#include "Node.h"

Node::Node(int data): data(data), link(nullptr) {
}

int Node::getData() {
    return data;
}

void Node::setData(int data) {
    this->data = data;
}

Node* Node::getLink() {
    return link;
}

void Node::setLink(Node* link) {
    this->link = link;
}