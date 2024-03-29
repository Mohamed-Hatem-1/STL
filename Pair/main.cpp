#include <iostream>
#include <vector>
using namespace std;

int main() {
    pair<int,string> p = {12, "ali"};
    cout << p.first << " "; // 12
    p.second = "mohamed";
    cout << p.second << "\n"; // mohamed

    // to take input from user
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << "\n";
    cout << "**************************************************\n";

    pair<string, pair<int,double>> p1;
    p1.first = "mohamed";
    p1.second.first = 50;
    p1.second.second = 12.25;
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << "\n"; // mohamed 50 12.25
    cout << "**************************************************\n";

    // Vector of pairs
    vector<pair<int,string>> vp ;
    vp.emplace_back(1, "ali");
    vp.push_back({2, "mohamed"});
    vp.emplace_back(3 ,"karem");
    for (int i = 0; i < 2; ++i) {
        int a; cin >> a; string b; cin >> b;
        vp.emplace_back(a, b);
    }
    vp[1].second = "sameh";
    for (auto it : vp) cout << it.first << " " << it.second << "\n";
    return 0;
}
