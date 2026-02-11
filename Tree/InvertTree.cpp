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


void InvertTree(Node*&root){
      if(root==NULL) return;

      Node*temp=root->left;
      root->left=root->right;
      root->right=temp;

      InvertTree(root->left);
      InvertTree(root->right);

}

void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Before Inversion (Inorder): ";
    inorder(root);

    InvertTree(root);   

    cout << "\nAfter Inversion (Inorder): ";
    inorder(root);

    return 0;
}