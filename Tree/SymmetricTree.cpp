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


bool isMirror(Node*a,Node*b){
     if(!a && !b) return true;
     if(!a || !b) return false;
     if(a->data != b->data) return false;
     return isMirror(a->left,b->right) && isMirror(a->right,b->left);
}
bool isSymmetric(Node* root) {
      
    return isMirror(root->left,root->right);
    }


    int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);

    root->left->left = new Node(3);
    root->left->right = new Node(4);

    root->right->left = new Node(4);
    root->right->right = new Node(3);

    if(isSymmetric(root))
        cout << "Tree is Symmetric\n";
    else
        cout << "Tree is Not Symmetric\n";

    return 0;
}
