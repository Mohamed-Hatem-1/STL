#include <bits/stdc++.h>
using namespace std;

int main() {
    // First in first out
    // Queue built by deque, and list
    // Add, Delete, Size --> O(1)

    queue<int> q1;
    q1.push(5);
    q1.emplace(6);
    q1.push(10);
    cout << q1.front() << "\n"; // 5
    cout << q1.back () << "\n"; // 10
    cout << "size = " << q1.size() << "\n"; // 3
    for (int i = 0; !q1.empty(); ++i) {
        cout << q1.front() << " ";
        q1.pop();
    }
    // 5 6 10
    cout << "\n**************************************************\n";

    // PriorityQueue
    // Special kind of queue
    // Elements will be sorted ascending or descending
    // Priority queue built by deque, and vector
    // Add, Delete --> O(log n)

    priority_queue<int> pq;
    pq.push(8);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(10);
    cout << pq.top() << "\n"; // 10
    pq.pop();
    cout << pq.top() << "\n"; // 8
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    // 8 5 4 1
    cout << "\n**************************************************\n";

     // To make the top the smallest number (sort descending)
    priority_queue<int,vector<int>,greater<>> pq1;
    pq1.push(8);
    pq1.push(4);
    pq1.push(5);
    pq1.push(1);
    while (!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    // 1 4 5 8
    return 0;
}
