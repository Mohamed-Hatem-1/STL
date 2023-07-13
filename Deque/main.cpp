#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Same as vector but fast insert and delete from the beginning too

    deque<char>d = {'r', 'o', 'g', 'r', 'a', 'm', 'm', 'e'};
    d.push_back('r'); // = d.emplace_back()
    d.push_front('p');
    for (int i = 0; i < d.size(); ++i) cout << d[i] << " "; cout << "\n";
    cout << d.front() << "\n"; // = d[0]
    cout << d.back() << "\n"; // = d[d.size() - 1]
    d.pop_front();
    d.pop_back();
    cout << d.front() << "\n";
    cout << d.back() << "\n";
    return 0;
}
