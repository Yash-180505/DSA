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

int heightTree(Node* root){
    if(root == NULL) return 0;

    int left = heightTree(root->left);
    if(left == -1) return -1;

    int right = heightTree(root->right);
    if(right == -1) return -1;

    if(abs(left - right) > 1) return -1;

    return max(left, right) + 1;
}

bool BalanceTree(Node* root){
    return heightTree(root) != -1;
}
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    if(BalanceTree(root))
        cout << "Tree is Balanced";
    else
        cout << "Tree is NOT Balanced";

    return 0;
}
