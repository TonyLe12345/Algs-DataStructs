#include <vector>
#include <string>

class Move
{
protected:
    std::vector <std::string> weakness;
public:
    virtual std::vector <std::string> getWeakness();
    virtual std::string getMove();
};


