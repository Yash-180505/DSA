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

int countNodes(Node* root){
    if(root == NULL) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int solve(Node* root, int &i, int k){
    if(root == NULL) return -1;

    int left = solve(root->left, i, k);
    if(left != -1) return left;

    i++;
    if(i == k) return root->data;

    return solve(root->right, i, k);
}

int kthSmallest(Node* root, int k){
    int i = 0;
    return solve(root, i, k);
}

int kthLargest(Node* root, int k){
    int n = countNodes(root);
    int target = n - k + 1;
    return kthSmallest(root, target);
}

int main(){

    Node* root = NULL;

    cout << "Enter data to create BST (-1 to stop): ";
    takeInput(root);

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    cout << "Kth Largest Element: " << kthLargest(root, k) << endl;

    return 0;
}