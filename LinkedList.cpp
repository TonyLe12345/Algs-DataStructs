#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    Node* firstNode = new Node (array[0]); 
    firstNode->setLink(nullptr);
    this->head = firstNode;
    
    Node* currentNode = head;
    for (int i=1; i<len; i++) {
        Node* newNode = new Node (array[i]); 
        newNode->setLink(nullptr);
        currentNode->setLink(newNode);
        currentNode = currentNode->getLink();
    }
    // for (int i=0; i<len; i++) {
    //     Node* newNode = new Node (array[i]); 
    //     newNode->setLink(this->head);
    //     this->head = newNode;
    // }
}

LinkedList::~LinkedList() {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        Node* deleteNode = currentNode;
        currentNode = currentNode->getLink();
        delete deleteNode;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    
    if (pos <= 1) {
        Node* newNode = new Node (newNum); 
        newNode->setLink(this->head);
        this->head = newNode;
    } else {
        Node* currentNode = head;
        for (int i = 1; i < pos-1; i++) {
            if (currentNode->getLink() == nullptr) {
                break;
            }
            currentNode = currentNode->getLink();
        }
        Node* newNode = new Node (newNum); 
        newNode->setLink(currentNode->getLink());
        currentNode->setLink(newNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    Node* currentNode = head;
    Node* PrevNode = head;
    for (int i = 1; i < pos; i++) {
        if (currentNode->getLink() == nullptr) {
            return false;

        }
        PrevNode = currentNode;
        currentNode = currentNode->getLink();
    }
    PrevNode->setLink(currentNode->getLink());
    delete currentNode;
    return true;
}

int LinkedList::get(int pos) {
    Node* currentNode = head;
    for (int i = 1; i < pos; i++) {
        if (currentNode->getLink() == nullptr) {
            return std::numeric_limits < int >::max();
        }
        currentNode = currentNode->getLink();
    }
    return currentNode->getData();
}
int LinkedList::search(int target) {
    int index = 1;
    Node* currentNode = head;
    while (currentNode != nullptr) {
        if (currentNode->getData() == target) {
            return index;
        }
        currentNode = currentNode->getLink();
        index++;
    }
    return -1;
}

void LinkedList::printList() {
    Node* currentNode = head;
    std::cout << "[";
    std::cout << currentNode->getData();
    currentNode = currentNode->getLink();
    while (currentNode != nullptr) {
        std::cout << " " << currentNode->getData();
        currentNode = currentNode->getLink();
    }
    std::cout << "]" << std::endl;
}