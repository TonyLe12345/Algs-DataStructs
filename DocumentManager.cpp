#include "DocumentManager.h"

DocumentManager::DocumentManager(/* args */) {
}

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Documents.insert(std::make_pair(id, document(name, id, license_limit)));
}

void DocumentManager::addPatron(int patronID) {
    Patrons.insert(std::make_pair(patronID, patronID));
}
int DocumentManager::search(std::string name) {
    for (std::map<int, document>::iterator it=Documents.begin(); it!=Documents.end(); ++it) {
        if (it->second.getName() == name) {
            return it->second.getId();
        }
    }

  return 0;
} // returns docid if name is in the document collection or 0 if the name is not in the collection


bool DocumentManager::borrowDocument(int docid, int patronID) {
    std::map<int,document>::iterator it = Documents.find(docid);
    std::map<int,int>::iterator it2 = Patrons.find(patronID);
    if (it->second.getBorrowNum() == it->second.getLimit() || it2 == Patrons.end()) {
        return false;
    } else {
        it->second.increaseBorrowNum();
        return true;
    }
}  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)


void DocumentManager::returnDocument(int docid, int patronID) {
    std::map<int,document>::iterator it = Documents.find(docid);
    it->second.decreaseBorrowNum();
}
