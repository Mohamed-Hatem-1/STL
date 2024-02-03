#include <bits/stdc++.h>
using namespace std;

int main() {
    // Always Sorted
    // Unique elements
    // Fast insert, delete, search --> O(log n)

    // Can't modify elements & No random Access
    // No push_back / push_front

    set<int> s = {5, 2, 3, 5, 2, 5, 4, 10, -2, 0, 1, -2};
    cout << "size = " << s.size() << "\n"; // 8
    cout << "Set = ";
    for (auto i : s) cout << i << " "; cout << "\n"; // -2 0 1 2 3 4 5 10
    cout << *s.begin() << "\n"; // the smallest number // -2
    cout << *s.rbegin() << "\n"; // the biggest number // 10
    cout << "**************************************************\n";

    s.insert(8); // = s.emplace (8);
    s.insert(8); // it will not be added
    s.emplace(-1);
    cout << "Set = ";
    for (auto i : s) cout << i << " "; cout << "\n"; // -2 -1 0 1 2 3 4 5 8 10
    cout << "**************************************************\n";

    cout << (s.count(0)? "0 exist\n" : "0 doesn't exist\n"); // count() -> return 1 if the element exist and 0 if not // 0 exist
    cout << (s.count(9)? "9 exist\n" : "9 doesn't exist\n"); // count() -> return 1 if the element exist and 0 if not // 9 doesn't exist
    cout << "**************************************************\n";

    s.erase (2);
    cout << "Set = ";
    for (auto i : s) cout << i << " "; cout << "\n"; // -2 -1 0 1 3 4 5 8 10

    // To delete from element to element
    auto begin = s.find(0);
    auto end = s.find(5);
    s.erase(begin, end); // delete from 0 to 5 but not the 5

    cout << "Set = ";
    for (auto i : s) cout << i << " "; cout << "\n"; // -2 -1 5 8 10
    cout << "**************************************************\n";

    // Another way to delete from element to element
    auto beg = s.lower_bound(-1); // It returns an iterator pointing to the element that is equal to or greater than the given value.
    auto en = s.upper_bound (8); // It returns an iterator pointing to the first element that is strictly greater than the given value.
    s.erase(beg, en); // delete from -1 to 8 (8 including)
    // More about lower_bound and upper_bound in binary_search

    cout << "Set = ";
    for (auto i : s) cout << i << " "; cout << "\n"; // -2 10
    cout << "**************************************************\n";

    // Equal_range(x, y) -> It returns a pair of iterators defining the bounds of the range. The first iterator points to the first element that is not less than the key, and the second iterator points to the first element greater than the key.
    s.insert(0);
    s.insert(5);
    // Set now = -2 0 5 10
    auto range = s.equal_range(0);
    cout << *range.first << " " << *range.second << "\n"; // 0 5
    cout << "**************************************************\n";
    
    // To make the set sort from bigger to smaller
    set<int, greater<>> DescendingSet = {2, 4, 1, 4, -2, 0, 5, 3, -2,};
    for (auto i : DescendingSet) cout << i << " "; cout << "\n"; // 5 4 3 2 1 0 -2
    cout << "**************************************************\n";

    set<pair<string, string>> st1 = {
            {"Mohamed", "Hatem"},
            {"Mohamed", "Ali"},
            {"Amir", "Hatem"},
    };
    cout << st1.count({"Mohamed", "Hatem"}) << "\n"; // 1
    pair<string, string> pair1 = {"Mohamed", "Ahmed"};
    cout << st1.count(pair1) << "\n"; // 0
    cout << "**************************************************\n";

    // Multiset
    // Similar to the set, with the exception that allows frequency

    multiset<int> ms = {1, 5, 0, 2, 5, 1, 3, 2, 5, 1};
    cout << ms.size() << "\n"; // 10
    cout << "Multiset = ";
    for (auto i : ms) cout << i << " "; cout << "\n"; // 0 1 1 1 2 2 3 5 5 5

    // The count function in the multiset returns the number of occurrences of an element inside it
    cout << "1 appeared " << ms.count(1) << " times\n"; // 1 appeared 3 times
    cout << "4 appeared " << ms.count(4) << " times\n"; // 4 appeared 0 times

    ms.erase(1); // will delete all ones in ms
    cout << "Multiset = ";
    for (auto i : ms) cout << i << " "; cout << "\n"; // 0 2 2 3 5 5 5

    ms.erase(ms.find(5)); // will delete just one occurrence of the value (5) in the ms
    cout << "Multiset = ";
    for (auto i : ms) cout << i << " "; cout << "\n"; // 0 2 2 3 5 5

    // Unordered set
    // Use unordered_set when you need faster insertion and lookup operations and don't care about the order of elements
    
    return 0;
}
