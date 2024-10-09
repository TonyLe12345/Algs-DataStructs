#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int> max_priority_queue;
    for (int n : values)
        max_priority_queue.push(n);
    for (int i=0; i < k-1; i++) {
        max_priority_queue.pop();
    }
    return max_priority_queue.top();
}