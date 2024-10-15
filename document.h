#include <string>
#pragma once

class document
{
private:
    std::string name;
    int id;
    int license_limit;
    int borrowNum;
public:
    document(std::string name, int id, int license_limit);
    std::string getName();
    int getId();
    int getLimit();
    int getBorrowNum();
    void increaseBorrowNum();
    void decreaseBorrowNum();
};
