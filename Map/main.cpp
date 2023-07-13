#include <bits/stdc++.h>
using namespace std;

int main() {
    // Like vector of pairs
    // Every element of the map has key and value -> "Mohamed": 8 , "Ali": 4
    // Always sorted according to the keys
    // Unique elements
    // Fast insert/delete/search -> o(log n)
    // Have random access []

    // Keys can not be modified

    map<string,int> mp = { {"mohamed", 2}, {"ali", 0}, {"sameh", 5} };
    mp ["ahmed"] = 1; // Here there is no key named "ahmed", so it added like the insert function
    mp ["ali"] = 9;
    mp.insert({"hatem", 5} );
    mp.emplace("amany", 20);
    for (auto i : mp) {
        cout << "key : " << i.first << "\tvalue : " << i.second << "\n";
    }
    cout << mp.size() << "\n";
    cout << mp.empty() << "\n";
    cout << "**************************************************\n";

    cout << mp.count("ali") << "\n"; // Returns 1 if existed, and 0 if not
    cout << mp.count("samira") << "\n";
    cout << "**************************************************\n";

    mp.erase("amany");
    for (auto i : mp) {
        cout << i.first << " " << i.second << "\n";
    }
    cout << "**************************************************\n";

    // Usually, map used to count frequency of the elements
    vector<int> v ={2, 5, 4, 2, 0, -1, 0, -1, 2, 5};
    map<int, int> mp1;
    for (auto i : v) mp1[i]++;
    for (auto i : mp1) cout << "Element " << i.first << " appeared " << i.second << " times\n";
    cout << "**************************************************\n";

    // To sort descending according to key
    map<char, int, greater<char> > mp2;
    mp2['a'] = 1;
    mp2['b'] = 4;
    mp2['c'] = 2;
    mp2['d'] = 7;
    mp2['e'] = 3;
    for (auto i : mp2) cout << i.first << " " << i.second << "\n";
    cout << "**************************************************\n";

    // multimap
    // allow frequency of keys
    multimap<string,string> mmp;
    mmp.emplace("ahmed", "cs");
    mmp.emplace("ahmed", "is");
    mmp.emplace("ahmed", "ai");
    auto z = mmp.find("ahmed");
    z++;
    z -> second = "bio" ;
    for (auto i : mmp) cout << i.first << " " << i.second << "\n";
    return 0;
}
