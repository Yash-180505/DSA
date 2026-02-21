#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertIntoBST(root->right, data);
    }
    else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(Node*& root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int solve(Node* root, int &i, int k){
    if(root == NULL) return -1;

    int left = solve(root->left, i, k);
    if(left != -1) return left;   // ✅ fixed

    i++;
    if(i == k) return root->data;

    return solve(root->right, i, k);
}

int kthSmallest(Node* root, int k){
    int i = 0;
    return solve(root, i, k);
}

int main(){

    Node* root = NULL;

    cout << "Enter data to create BST (-1 to stop): ";
    takeInput(root);

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    int ans = kthSmallest(root, k);

    if(ans == -1)
        cout << "Invalid k value" << endl;
    else
        cout << "Kth Smallest Element: " << ans << endl;

    return 0;
}