#include <bits/stdc++.h>
using namespace std;

class HashMap {
    static const int size = 10;
    vector<list<pair<int,int>>> table;

public:
    HashMap() {
        table.resize(size);
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key, int value) {
        int index = hashFunction(key);

        for(auto &it : table[index]) {
            if(it.first == key) {
                it.second = value;
                return;
            }
        }

        table[index].push_back({key, value});
    }

    bool search(int key) {
        int index = hashFunction(key);

        for(auto &it : table[index]) {
            if(it.first == key) return true;
        }
        return false;
    }

    void erase(int key) {
        int index = hashFunction(key);

        for(auto it = table[index].begin(); it != table[index].end(); it++) {
            if(it->first == key) {
                table[index].erase(it);
                return;
            }
        }
    }

    void print() {
        for(int i = 0; i < size; i++) {
            cout << i << " -> ";
            for(auto &it : table[i]) {
                cout << "(" << it.first << "," << it.second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap hm;

    hm.insert(1, 100);
    hm.insert(11, 200); // collision
    hm.insert(2, 300);

    hm.print();

    cout << "Search 11: " << hm.search(11) << endl;

    hm.erase(11);

    cout << "After deletion:\n";
    hm.print();

    return 0;
}