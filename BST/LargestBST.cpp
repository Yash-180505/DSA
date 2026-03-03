#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
         data=d;
        left=NULL;
        right=NULL;
    }
};

bool validateBST(Node*root,long long minn,long long maxx){
      if(root==NULL) return true;
      if(root->data<minn || root->data>maxx){
        

         return false;

      }
      return validateBST(root->left,minn,root->data)&&validateBST(root->right,root->data,maxx);
}

int size(Node*root){
    if(root==NULL) return 0;
      return 1+size(root->left)+size(root->right);
}
int LargestTree(Node*root){
   if(root==NULL) return 0;

   if(validateBST(root,LLONG_MIN,LLONG_MAX)){
       return size(root);
   }

   return max(LargestTree(root->right),LargestTree(root->left));
}
int main(){
 Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);

    cout << "Size of Largest BST in Binary Tree: "
         << LargestTree(root);

    return 0;
}