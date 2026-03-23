#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    int row;
    int col;

    node(int d, int r, int c) {
        data = d;
        row = r;
        col = c;
    }
};

class compare {
public:
    bool operator()(node* a, node* b) {
        return a->data > b->data;
    }
};

vector<int> smallestRange(vector<vector<int>>& nums) {
    int mini = INT_MAX;
    int maxi = INT_MIN;

    priority_queue<node*, vector<node*>, compare> pq;

    int k = nums.size();

    for (int i = 0; i < k; i++) {
        int element = nums[i][0];
        mini = min(mini, element);
        maxi = max(maxi, element);
        pq.push(new node(element, i, 0));
    }

    int start = mini;
    int end = maxi;

    while (!pq.empty()) {
        node* temp = pq.top();
        pq.pop();

        mini = temp->data;

        if (maxi - mini < end - start) {
            start = mini;
            end = maxi;
        }

        if (temp->col + 1 < nums[temp->row].size()) {
            int nextVal = nums[temp->row][temp->col + 1];
            maxi = max(maxi, nextVal);
            pq.push(new node(nextVal, temp->row, temp->col + 1));
        } else {
            break;
        }
    }

    return {start, end};
}

int main() {
    vector<vector<int>> nums = {
        {4, 10, 15, 24, 26},
        {0, 9, 12, 20},
        {5, 18, 22, 30}
    };

    vector<int> ans = smallestRange(nums);

    cout << "Smallest Range: [" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}