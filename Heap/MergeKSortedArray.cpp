#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data, i, j;
};

struct compare {
    bool operator()(Node a, Node b) {
        return a.data > b.data;
    }
};

vector<int> mergeKSortedArray(vector<vector<int>>& kArray, int k){

    priority_queue<Node, vector<Node>, compare> pq;

    // push first element of each array
    for(int i = 0; i < k; i++){
        if(!kArray[i].empty()){
            pq.push({kArray[i][0], i, 0});
        }
    }

    vector<int> ans;

    while(!pq.empty()){
        Node temp = pq.top();
        pq.pop();

        ans.push_back(temp.data);

        int i = temp.i;
        int j = temp.j;

        if(j + 1 < kArray[i].size()){
            pq.push({kArray[i][j+1], i, j+1});
        }
    }

    return ans;
}