#include <string>
#include "document.h"
#include <map>
#pragma once

class DocumentManager
{
private:
    std::map<int, document> Documents;
    std::map<int, int> Patrons;
public:
    DocumentManager(/* args */);
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection
    bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    void returnDocument(int docid, int patronID);
};
