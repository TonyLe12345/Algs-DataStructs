#include <string>
class document
{
private:
    std::string name;
    int id;
    int license_limit;
    int borrowNum = 0;
public:
    document(std::string name, int id, int license_limit);
    std::string getName();
    int getId();
    int getLimit();
    int getBorrowNum();
    void increaseBorrowNum();
    void decreaseBorrowNum();
};
