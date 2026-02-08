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

Node*FindPredecessor(Node*root){
       if(root==NULL) return NULL;

       Node*predecessor=root->left;
       while(predecessor->right!=NULL && predecessor->right!=root){
           predecessor=predecessor->right;
       }

       return predecessor;
}

void flattenBTtoLL(Node*root){
      if(root==NULL) return ;
      Node*curr=root;
      while(curr!=NULL){
          if(curr->left!=NULL){
               Node*pred=FindPredecessor(curr);
               pred->right=curr->right;
               curr->right=curr->left;
                curr->left=NULL;
          }
          curr=curr->right;
        
      }
}

void printFlattened(Node* root){
    Node* curr = root;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->right;
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    flattenBTtoLL(root);

    cout << "Flattened Linked List: ";
    printFlattened(root);

    return 0;
}

