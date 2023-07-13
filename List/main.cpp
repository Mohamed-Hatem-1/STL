#include <bits/stdc++.h>
using namespace std;

bool if_Even(int x) { return !(x % 2); }

int main() {
    // Fast insert and delete from everywhere
    // Has no random access

    // List is a doubly linked list, whereas vector and deque is a single linked list

    // Adding
    list<int>l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    l.push_front(0);
    l.push_back(11);

    // To add at specific position
    auto z = find(l.begin(), l.end(), 6);
    l.emplace(z, 5);
    l.insert(z, 9,99);

    // Deleting
    for (auto it : l) cout << it << " "; cout << "\n";
    l.pop_front();
    l.pop_back();

    // To remove specific element
    l.remove(2);
    // Another way
    auto i = find(l.begin(), l.end(), 4);
    l.erase(i);
    for (auto it : l) cout << it << " "; cout << "\n";

    // To remove from position to position
    auto j = find(l.begin(), l.end(), 6);
    auto k = find(l.begin(), l.end(), 9);
    l.erase(j, k); // delete from 6 to 9 and not delete 9
    for (auto it : l) cout << it << " "; cout << "\n";
    cout << "**************************************************\n";

    // Merge 2 lists
    list<int>l1 = {1, 3, 5};
    list<int>l2 = {2, 4, 6};
    l1.merge(l2); // automatically l1 be sorted
    for (auto item : l1) cout << item << " "; cout << "\n";
    for (auto item : l2) cout << item << " " ; cout << "\n";
    cout << "**************************************************\n";

    // Merge 2 lists without sorting
    list<int>l3 = {1, 3, 5};
    list<int>l4 = {2, 4, 6};
    l3.splice(l3.begin(), l4);
    for (auto i : l3) cout << i << " "; cout << "\n";
    for (auto i : l4) cout << i << " " ; cout << "\n";
    cout << "**************************************************\n";

    // Remove all frequented sequenced elements
    list<int>l5 = {1, 2, 2, 2, -1, 1, 5};
    l5.unique();
    for (auto i : l5) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // Sort and reverse
    list<int> l6 = {2, 4, 1, 2, 5, 0};
    l6.sort();
    for (auto i : l6) cout << i << " "; cout << "\n";

    // Sort descending
//    l6.sort(greater<int>());
//    for( auto i : l6) cout << i << " "; cout << "\n";
    l6.reverse();
    for (auto i : l6) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // Remove_if
    list<int>l7 = {1, 2, 3, 4, 5, 6, 7};
    l7.remove_if(if_Even);
    for (auto it : l7) cout << it << " "; cout << "\n";
    return 0;
}
