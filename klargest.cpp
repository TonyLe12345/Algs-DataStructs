#include <vector>
#include <queue>

int kth_largest(vector<int> values, int k) {
    std::priority_queue<int> max_priority_queue;
    for (int n : values)
        max_priority_queue.push(n);
    return max_priority_queue[k-1];
}