#include <bits/stdc++.h>
using namespace std;

int main() {
    // Last in first out -> LIFO
    // Stack, Queue and PriorityQueue built by deque
    // Have no random access

    stack<char>s1;
    s1.push('a');
    s1.push('b');
    s1.emplace('c'); // push = emplace
    s1.push('d');
    cout << "top = " << s1.top() << "\n";
    cout << "size = " << s1.size() << "\n";
    cout << "s1 :\n" ;
    for (int i = 0; !s1.empty(); ++i) {
        cout << s1.top() << "\n";
        s1.pop();
    }
    cout << "**************************************************\n";

    // Swapping
    // Must be the same datatype
    stack<int> s2, s3;
    s2.push (1); s2.push (2); s2.push (3);
    s3.push (10); s3.push (11); s3.push (12); s3.push (13);

    s2.swap(s3);
    cout << "s2 after swap :\n";
    for (int i = 0; !s2.empty(); ++i) {
        cout << s2.top() << "\n";
        s2.pop();
    }
    cout << "s3 after swap :\n";
    for (int i = 0; !s3.empty(); ++i) {
        cout << s3.top() << "\n";
        s3.pop();
    }
    return 0;
}
