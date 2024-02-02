#include <bits/stdc++.h>
using namespace std;

int main() {
    // Last in first out -> LIFO
    // Stack, Queue and PriorityQueue built by deque
    // Have no random access
    // Push, Pop, and Size --> O(1)

    stack<char>s1;
    s1.push('a');
    s1.push('b');
    s1.emplace('c'); // push = emplace
    s1.push('d');
    cout << "top = " << s1.top() << "\n"; // d
    s1.pop();
    cout << "top = " << s1.top() << "\n"; // c    
    cout << "size = " << s1.size() << "\n"; // 3
    cout << "s1 : " ;
    for (int i = 0; !s1.empty(); ++i) {
        cout << s1.top() << " ";
        s1.pop();
    }
    // s1 : c b a
    cout << "\n**************************************************\n";

    // Swapping
    // Must be the same datatype
    stack<int> s2, s3;
    s2.push (1); s2.push (2); s2.push (3);
    s3.push (10); s3.push (11); s3.push (12); s3.push (13);

    s2.swap(s3);
    cout << "s2 after swap : ";
    for (int i = 0; !s2.empty(); ++i) {
        cout << s2.top() << " ";
        s2.pop();
    }
    // s2 after swap : 13 12 11 10
    cout << "s3 after swap : ";
    for (int i = 0; !s3.empty(); ++i) {
        cout << s3.top() << " ";
        s3.pop();
    }
    // s3 after swap : 3 2 1
    return 0;
}
