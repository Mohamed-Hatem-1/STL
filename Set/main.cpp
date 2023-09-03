#include <bits/stdc++.h>
using namespace std;

int main() {
    // Always Sorted
    // Unique elements
    // Fast insert/delete/search -> o(log n)

    // Can't modify elements & No random Access
    // No push_back / push_front

    set<int> s = {5, 2, 3, 5, 2, 5, 4, 10, -2, 0, 1, -2};
    cout << "size = " << s.size() << "\n";
    cout << "Set is\n";
    for (auto i : s) cout << i << " "; cout << "\n";
    cout << *s.begin() << "\n"; // the smallest number
    cout << *s.rbegin() << "\n"; // the biggest number
    cout << "**************************************************\n";

    s.insert (8); // = s.emplace (8);
    s.insert (8 ); // it will not be added
    s.emplace (-1);
    cout << "Set is\n";
    for (auto i : s) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    cout << (s.count(0)? "0 is exist\n" : "0 isn't exist\n"); // count() -> return 1 if the elements is existed and 0 if not
    cout << (s.count(9)? "9 is exist\n" : "9 isn't exist\n"); // count() -> return 1 if the elements is existed and 0 if not
    cout << "**************************************************\n";

    s.erase (2);
    cout << "Set is\n";
    for (auto i : s) cout << i << " "; cout << "\n";

    // To delete from element to element
    auto begin = s.find(0);
    auto end = s.find(5);
    s.erase(begin, end); // delete from 0 to 4

    cout << "Set is\n";
    for (auto i : s) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // Another way to delete from element to element
    auto beg = s.lower_bound(-1);
    auto en = s.upper_bound (8);
    s.erase(beg, en); // delete from -1 to 8

    cout << "Set is\n";
    for (auto i : s) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // To make the set sort from bigger to smaller
    set <int , greater<> > DescendingSet = {2, 4, 1, 4, -2, 0, 5, 3, -2,};
    for (auto i : DescendingSet) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    set <pair <string, string>> st1 = {
            {"Mohamed", "Hatem"},
            {"Mohamed", "Ali"},
            {"Amir", "Hatem"},
    };
    cout << st1.count({"Mohamed", "Hatem"});
    pair <string, string> pair1 = {"Mohamed", "Ahmed"};
    cout << st1.count(pair1);
    cout << "**************************************************\n";

    // Multiset
    // Similar to the set, with the exception that allows frequency

    multiset<int> ms = {1, 5, 0, 2, 5, 1, 3, 2, 5, 1};
    cout << ms.size() << "\n";
    cout << "Multiset is\n";
    for (auto i : ms) cout << i << " "; cout << "\n";

    // The count function in the multiset returns the number of occurrences of an element inside it
    cout << "1 appears " << ms.count(1) << " times\n";


    ms.erase(1); // will delete all ones in ms
    cout << "Multiset is\n";
    for (auto i : ms) cout << i << " "; cout << "\n";

    ms.erase(ms.find(5) ); // will delete just one occurrence of the value (5) in the ms
    cout << "Multiset is\n";
    for (auto i : ms) cout << i << " "; cout << "\n";

    // Un-ordered set
    // Use unordered_set when you need faster insertion and lookup operations and don't care about the order of elements
    
    return 0;
}
