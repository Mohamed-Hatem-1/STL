#include <bits/stdc++.h>

using namespace std;

int main() {
    // First in first out

    queue<int> q1;
    q1.push(5);
    q1.emplace(6);
    q1.push(10);
    cout << q1.front() << "\n";
    cout << q1.back () << "\n";
    cout << "size = " << q1.size() << "\n";
    for (int i = 0; !q1.empty(); ++i) {
        cout << q1.front() << " ";
        q1.pop();
    } cout << "\n";
    cout << "**************************************************\n";

    // PriorityQueue
    // Special kind of queue
    // Elements will be sorted ascending or descending

    priority_queue<int> pq;
    pq.push(8);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    } cout << "\n";
    cout << "**************************************************\n";

    priority_queue<int,vector<int>,greater<>> pq1; // to make the top the smallest number
    pq1.push(8);
    pq1.push(4);
    pq1.push(5);
    pq1.push(1);
    while (!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    } cout << "\n";
    return 0;
}
