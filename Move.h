#include <vector>
#include <string>

class Move
{
protected:
    std::vector <std::string> weakness;
    std::string move;
public:
    virtual std::vector <std::string> getWeakness();
};


