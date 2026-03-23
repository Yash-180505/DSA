#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    int i;
    int j;

    node(int d,int row,int col){
        data=d;
        i=row;
        j=col;
    }
};

class compare{
public:
    bool operator()(node* a ,node* b){
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArray(vector<vector<int>>& karray, int k){
    priority_queue<node*,vector<node*>,compare> pq;

    for(int i=0;i<k;i++){
        if(!karray[i].empty()){
            node* tmp = new node(karray[i][0], i, 0);
            pq.push(tmp);
        }
    }

    vector<int> ans;

    while(!pq.empty()){
        node* tmp = pq.top();
        pq.pop();

        ans.push_back(tmp->data);

        int i = tmp->i;
        int j = tmp->j;

        if(j + 1 < karray[i].size()){
            node* next = new node(karray[i][j+1], i, j+1);
            pq.push(next);
        }
    }

    return ans;
}

int main(){
    vector<vector<int>> karray = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> ans = mergeKSortedArray(karray,3);

    for(int i:ans){
        cout<<i<<" ";
    }
}