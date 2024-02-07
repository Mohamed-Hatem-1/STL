#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int> a, pair<char,int> b) {
  return a.second > b.second; 
}

int main() {
    // Like vector of pairs
    // Every element of the map has key and value -> "Mohamed": 8 , "Ali": 4
    // Always sorted ascending according to the keys
    // Unique elements
    // Fast insert, delete, search --> O(log n)
    // Have random access []
    // Built by tree

    // Keys can not be modified but the value can

    map<string,int> mp = { {"mohamed", 2}, {"ali", 0}, {"sameh", 5} }; // Initialization
    mp["ahmed"] = 1; // Here there is no key named "ahmed", so it added like the insert function
    mp["ali"] = 9;
    mp.insert({"hatem", 5});
    mp.emplace("amany", 20);
    for (auto i : mp) cout << "key : " << i.first << "\tvalue : " << i.second << "\n";
    /*
    key : ahmed     value : 1
    key : ali       value : 9
    key : amany     value : 20
    key : hatem     value : 5
    key : mohamed   value : 2
    key : sameh     value : 5
    */
    for (auto i : ranges::reverse_view(mp)) cout << i.first << " " << i.second << "\n";
    /*
    sameh 5
    mohamed 2
    hatem 5
    amany 20
    ali 9
    ahmed 1
    */
    cout << mp.size() << "\n"; // 6
    cout << mp.empty() << "\n"; // 0
    // Search
    cout << mp.contains("amany") << "\n"; // 1
    cout << mp.contains("messi") << "\n"; // 0
    cout << "**************************************************\n";

    cout << mp.count("ali") << "\n"; // Returns 1 if existed, and 0 if not // 1
    cout << mp.count("samira") << "\n"; // 0
    cout << "**************************************************\n";

    mp.erase("sameh");
    mp.erase(mp.begin(), mp.find("hatem")); // Delete from beginning to hatem but not hatem
    // If I want to delete from begin to the hatem this is another way
    // mp.erase(mp.lower_bound("ahmed"), mp.upper_bound("hatem"));
    for (auto i : mp) cout << i.first << " " << i.second << "\n";
    /*
    hatem 5
    mohamed 2
    sameh 5
    */
    cout << "**************************************************\n";

    // Usually, map used to count frequency of the elements
    vector<int> v ={2, 5, 4, 2, 0, -1, 0, -1, 2, 5};
    map<int, int> mp1;
    for (auto i : v) mp1[i]++;
    for (auto i : mp1) cout << "Element " << i.first << " appeared " << i.second << " times\n";
    /*
    Element -1 appeared 2 times
    Element 0 appeared 2 times
    Element 2 appeared 3 times
    Element 4 appeared 1 times
    Element 5 appeared 2 times
    */
    cout << "**************************************************\n";

    // To sort descending according to key
    map<char, int, greater<> > mp2;
    mp2['a'] = 1;
    mp2['b'] = 4;
    mp2['c'] = 2;
    mp2['d'] = 7;
    mp2['e'] = 3;
    for (auto i : mp2) cout << i.first << " " << i.second << "\n";
    /*
    e 3
    d 7
    c 2
    b 4
    a 1
    */
    // To sort ascending according to the value not the key



    
    auto it = mp2.equal_range('c'); // Return a pair of map, first map is the element be searched and it's value, second map is the element after it and it's value
    cout << it.first->first << " " << it.first->second << "\n"; // c 2
    cout << it.second->first << " " << it.second->second << "\n"; // b 4
    cout << "**************************************************\n";

    // Multimap
    // allow duplicate of keys
    // There is no random access []
    multimap<string,string> mmp;
    mmp.emplace("ahmed", "cs"); // mmp["ahmed"] = "cs"; // error
    mmp.emplace("ahmed", "is"); // = mmp.insert({"ahmed", "is"});
    mmp.emplace("ahmed", "ai");
    mmp.emplace("eman", "is");
    auto z = mmp.find("ahmed");
    z++;
    z->second = "bio";
    for (auto i : mmp) cout << i.first << " " << i.second << "\n";
    /*
    ahmed cs
    ahmed bio
    ahmed ai
    eman is
    */
    cout << mmp.count("ahmed") << "\n"; // 3

    // Unordered map
    // Same as map but elements aren't ordered and fast insert, delete, search --> O(1)
    unordered_map<string, int> ump;
    ump["Mercedes"] = 2019;
    ump["BMW"] = 2024;
    ump["Toyota"] = 2020;
    for (auto i : ump) cout << i.first << " " << i.second << "\n";
    /*
    Toyota 2020
    BMW 2024
    Mercedes 2019
    */
    
    // Search
    cout << ump.contains("BMW") << "\n"; // 1
    cout << ump.contains("Chevrolet") << "\n"; // 0

    // Unordered multimap
    // Same as unordered map but allows frequency of keys
    
    return 0;
}
