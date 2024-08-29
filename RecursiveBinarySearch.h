#include <vector>

class RecursiveBinarySearch
{
private:
    bool searchhidden(std::vector<int> list, int number, int start, int end);
public:
    bool search(std::vector<int> list, int number);
};
