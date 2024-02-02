#include <bits/stdc++.h>
using namespace std;

bool if_Even(int x) { return !(x % 2); }
bool smallerThan5(int x) { return x < 5; }

int main() {
    // Fast insert and delete from everywhere --> O(1)
    // Has no random access

    // List is a doubly linked list, whereas vector and deque is a single linked list

    // Adding
    list<int>l = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    l.push_front(0);
    l.push_back(11);

    // To add at specific position
    auto z = find(l.begin(), l.end(), 6);
    l.emplace(z, 5); // Add before 6 number : 5
    l.insert(z, 3,99); // Add before 6 number : 99  3 times

    for (auto it : l) cout << it << " "; cout << "\n"; // 0 1 2 2 3 4 5 5 99 99 99 6 7 8 9 10 11
    
    // Deleting
    l.pop_front();
    l.pop_back();

    // To remove specific element
    l.remove(2); // Remove all the 2s in the list
    // If i want to remove just one 99
    auto i = find(l.begin(), l.end(), 99);
    l.erase(i);
    for (auto it : l) cout << it << " "; cout << "\n"; // 1 3 4 5 5 99 99 6 7 8 9 10

    // To remove from position to position
    auto j = find(l.begin(), l.end(), 6);
    auto k = find(l.begin(), l.end(), 9);
    l.erase(j, k); // delete from 6 to 9 and not delete 9
    for (auto it : l) cout << it << " "; cout << "\n"; // 1 3 4 5 5 99 99 9 10
    cout << "**************************************************\n";

    // Merge 2 lists
    list<int>l1 = {1, 3, 5};
    list<int>l2 = {2, 4, 6};
    l1.merge(l2); // automatically l1 be sorted
    for (auto item : l1) cout << item << " "; cout << "\n"; // 1 2 3 4 5 6
    for (auto item : l2) cout << item << " " ; cout << "\n"; // empty
    cout << "**************************************************\n";

    // Merge 2 lists without sorting
    list<int>l3 = {1, 3, 5};
    list<int>l4 = {2, 4, 6};
    l3.splice(l3.begin(), l4); // Put l4 in the beginning of l3
    for (auto i : l3) cout << i << " "; cout << "\n"; // 2 4 6 1 3 5
    for (auto i : l4) cout << i << " " ; cout << "\n"; // empty
    cout << "**************************************************\n";

    // Sort and reverse
    list<int> l5 = {2, 4, 1, 2, 5, 0};
    l5.sort();
    for (auto i : l5) cout << i << " "; cout << "\n"; // 0 1 2 2 4 5

    // Sort descending
//    l5.sort(greater<int>());
//    for( auto i : l5) cout << i << " "; cout << "\n"; // 5 4 2 2 1 0
    l5.reverse();
    for (auto i : l5) cout << i << " "; cout << "\n"; // 5 4 2 2 1 0
    cout << "**************************************************\n";

    // Remove_if
    list<int>l6 = {1, 2, 3, 4, 5, 6, 7};
    l6.remove_if(if_Even);
    l6.remove_if(smallerThan5);
    for (auto it : l6) cout << it << " "; cout << "\n"; // 5 7
    return 0;
}
