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

Node* LCA(Node* root, Node* p, Node* q){
    if(root == NULL) return NULL;

    if(root == p || root == q)
        return root;

    Node* left = LCA(root->left, p, q);
    Node* right = LCA(root->right, p, q);

    if(left && right)
        return root;

    if(left) return left;
    return right;
}

int main(){

    Node* root = new Node(3);

    root->left = new Node(5);
    root->right = new Node(1);

    root->left->left = new Node(6);
    root->left->right = new Node(2);

    root->right->left = new Node(0);
    root->right->right = new Node(8);

    Node* p = root->left->left;   // 6
    Node* q = root->left->right;  // 2

    Node* ans = LCA(root, p, q);

    if(ans)
        cout << "LCA is: " << ans->data << endl;
    else
        cout << "LCA not found" << endl;

    return 0;
}