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

void inorder(Node* root, Node*& curr){
    if(root == NULL) return;

    inorder(root->left, curr);

    root->left = NULL;
    curr->right = root;
    curr = root;

    inorder(root->right, curr);
}

Node* FlattenedBST(Node* root){
    Node* dummy = new Node(-1);
    Node* curr = dummy;

    inorder(root, curr);

    return dummy->right;
}

int main(){

    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);

    root->left->left = new Node(2);
    root->left->right = new Node(4);

    root->right->right = new Node(8);

    Node* newRoot = FlattenedBST(root);


    cout << "Flattened BST: ";
    while(newRoot != NULL){
        cout << newRoot->data << " ";
        newRoot = newRoot->right;
    }

    return 0;
}