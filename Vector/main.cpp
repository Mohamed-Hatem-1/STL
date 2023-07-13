#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    // Fast insert and delete from the end

    vector<string> names = {"Ahmed", "Mohamed", "Samir"};
    // vector -> class
    // <string> -> datatype
    // names -> object
    vector<int> v = {1, 2, 3};
    for (int i = 0; i < v.size(); ++i) cout << v[i] << " "; cout << "\n";

    // Another way for printing
    for (auto it = v.begin(); it != v.end(); ++it) cout << *it << " "; cout << "\n";

    // Another way for printing
    for(auto it: v) cout << it << " "; cout << "\n";

    // Another way for initializing
    vector<int> v1(5); // vector of 5 elements with default value (0)
    for (auto i : v1) cout << i << " "; cout << "\n";

    // Another way for initializing
    vector<int> v2(5, 10); // vector of 5 elements with value (10)
    for (int i = 0; i < v2.size(); ++i) cout << v2[i] << " "; cout << "\n";
    cout << "**************************************************\n";

    // Adding
    vector<int>v3 = {1, 2, 3};
    v3.push_back(4); // = v3.emplace_back(4) // add element to the end of the vector
    v3.insert(v3.begin(), 5); // = v3.emplace // add element to specific position (here will be the first)
    v3.insert(v3.begin() + 1, 6); // add 6 in the index 1
    v3.insert(v3.begin() + 5, 5, 99); // add (5) 99 times starting from index 5
    v3.emplace(v3.end() - 1, 1024);
    for (int i = 0; i < 5; ++i) v3.push_back(i);
    for(auto i: v3) cout << i << " "; cout << "\n";
    cout << v3.front() << "\n"; // = v3[0]
    cout << v3.back() << "\n"; // = v3[v3.size() - 1]
    cout << "**************************************************\n";

    // Deleting
    vector<int> v4 = {1, 2, 3, 4, 5, 6, 7, 8};
    v4.pop_back(); // delete the last element
    v4.erase(v4.begin()); // delete a specific element (here will be the first)
    v4.erase(v4.begin() + 4); // delete element in index 4
    for (auto i: v4) cout << i << " "; cout << "\n";
    v4.erase(v4.begin() + 1, v4.begin() + 3); // delete from index 1 to index 3 but not remove index 3
    for (auto i: v4) cout << i << " "; cout << "\n";
    v4.clear(); // remove all elements
    cout << v4.empty() << "\n"; // return 0 if it is empty and 1 if it's not
    cout << "**************************************************\n";

    // Resize and Shrink to fit
    vector<int> v5 = {1, 2, 3, 4, 5};
    cout << "vector size = " << v5.size() << "\n";
    v5.resize(3);
    cout << "vector size = " << v5.size() << "\n";
    cout << "element no.4 = " << v5[3] << "\n"; // still exist
    v5.shrink_to_fit(); // to remove all remaining elements
    cout << "element no.4 = " << v5[3] << "\n";
    cout << "**************************************************\n";

    // Copy
    vector<int> vector1 = {1, 2, 3};
    vector<int> vector2(vector1);
    for (auto i : vector2) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // Swapping vectors
    vector<int> v6(5, 1);
    vector<int> v7(3);
    cout << "Before swap :\nv6 = ";
    for (auto i : v6) cout << i << " "; cout << "\nv7 = ";
    for (auto i : v7) cout << i << " "; cout << "\nAfter swap :\nv6 = ";
    v6.swap(v7);
    for (auto i : v6) cout << i << " "; cout << "\nv7 = ";
    for (auto i : v7) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // Copy from array
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> vector3(size);
    copy(arr, arr + size , vector3.begin());
    cout << "vector elements are : ";
    for (auto i : vector3) cout << i << " "; cout << "\n";
    cout << "**************************************************\n";

    // Printing without loops
    vector<int>vector4 = {1, 2, 3, 4};
    copy(vector4.begin(), vector4.end(),ostream_iterator<int>(cout, " "));
    cout << "\n";
    copy(vector4.begin(), vector4.end(), ostream_iterator<int>(cout));
    cout << "**************************************************\n";

//    To take input from user
    vector<int> vector5(5);
    for (int i = 0; i < 5; ++i) cin >> vector5[i];

    return 0;
}
