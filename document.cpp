#include "document.h"

document::document(std::string name, int id, int license_limit) : name(name), id(id), license_limit(license_limit) {
    borrowNum = 0;
}

std::string document::getName() {
    return name;
}

int document::getId() {
    return id;
}

int document::getLimit() {
    return license_limit;
}

int document::getBorrowNum() {
    return borrowNum;
}

void document::increaseBorrowNum() {
    borrowNum++;
}

void document::decreaseBorrowNum() {
    borrowNum--;
}