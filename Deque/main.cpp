#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Same as vector but fast insert and delete from the beginning too --> O(1)

    deque<char>d = {'r', 'o', 'g', 'r', 'a', 'm', 'm', 'e'};
    d.push_back('r'); // = d.emplace_back()
    d.push_front('p');
    for (int i = 0; i < d.size(); ++i) cout << d[i]; cout << "\n"; // programmer
    cout << d.front() << "\n"; // = d[0] // p
    cout << d.back() << "\n"; // = d[d.size() - 1] // r
    d.pop_front();
    d.pop_back();
    cout << d.front() << "\n"; // r
    cout << d.back() << "\n"; // e
    return 0;
}
