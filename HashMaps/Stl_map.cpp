#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<int, int> ump;
    ump[1] = 10;
    ump[3] = 30;
    ump[2] = 20;

    cout << "Unordered Map:\n";
    for(auto it : ump) {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;

    map<int, int> mp;
    mp[1] = 10;
    mp[3] = 30;
    mp[2] = 20;

    cout << "Ordered Map:\n";
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;

    cout << "Search key 2: " << (mp.find(2) != mp.end()) << endl;

    mp.erase(2);

    cout << "After erase:\n";
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}