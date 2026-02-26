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

bool SameTree(Node* a, Node* b){
    if(!a && !b) return true;
    if(!a || !b) return false;
    if(a->data != b->data) return false;

    return SameTree(a->left, b->left) && 
           SameTree(a->right, b->right);
}

bool SubTree(Node* root, Node* subRoot){

    if(subRoot == NULL) return true;
    if(root == NULL) return false;

    if(SameTree(root, subRoot))
        return true;

    return SubTree(root->left, subRoot) ||
           SubTree(root->right, subRoot);
}

int main(){

   
    Node* root = new Node(3);
    root->left = new Node(4);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(2);

    Node* subRoot = new Node(4);
    subRoot->left = new Node(1);
    subRoot->right = new Node(2);

    if(SubTree(root, subRoot))
        cout << "Subtree found";
    else
        cout << "Subtree not found";

    return 0;
}