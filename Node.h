#include <string>
class Node
{
private:
    std::string data;
    Node * childNodes[26] = {nullptr};
    bool wordEnd = false;
public:
    Node(std::string word);
    ~Node();
    void insert(char value);
    std::string returnData();
    void endWord();
    bool returnEndWord();
    Node* nextLetter(char letter);

};

