#include <string>

class Move
{
private:
    std::string move;
public:
    virtual std::string makeMove();
    void setMove(std::string move);
    
};
