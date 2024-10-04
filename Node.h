#include <string>
class Node
{
private:
    std::string data;
    Node * childNodes[26] = {nullptr};
    bool wordEnd = false;
public:
    Node(std::string word) {
        this->data = word;
    };
    ~Node();
    void insert(char value) {
        if (childNodes[value - 'a'] == nullptr) {  
        Node* newNode = new Node(data + value); 
        childNodes[value - 'a'] = newNode;
    }
    }
    std::string returnData() {
        return data;
    };
    void endWord() {
        this->wordEnd = true;
        return;
    };
    bool returnEndWord() {
        return wordEnd;
    }
    Node* nextLetter(char letter) {
        return childNodes[letter - 'a'];
    }

};

