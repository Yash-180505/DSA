#include<bits/stdc++.h>
using namespace std;
class Node{
     public:
       int data;
       Node*left;
       Node*right;
       Node(int d){
          data=d;

       }
};
Node*LCA(Node*root,Node*p,Node*q){
     if(root==NULL)  return NULL;

     if(root->data<p->data && root->data<q->data)  return LCA(root->right,p,q);

     if(root->data>p->data && root->data >q->data) return LCA(root->left,p,q);


     return root;
}


Node*LCAIterative(Node*root,Node*p,Node*q){
      while(root){
          if(root->data<p->data && root->data<q->data) root=root->right;


          else if(root->data>p->data && root->data>q->data)  root=root->left;

          else  return root;
      }

      return NULL;
}
int main(){

 
    Node* root = new Node(20);

    root->left = new Node(10);
    root->right = new Node(30);

    root->left->left = new Node(5);
    root->left->right = new Node(15);

    root->right->left = new Node(25);
    root->right->right = new Node(35);

    Node* p = root->left->left;   // 5
    Node* q = root->left->right;  // 15

    Node* ans1 = LCA(root, p, q);
    Node* ans2 = LCAIterative(root, p, q);

    if(ans1)
        cout << "Recursive LCA: " << ans1->data << endl;
    else
        cout << "Recursive LCA not found\n";

    if(ans2)
        cout << "Iterative LCA: " << ans2->data << endl;
    else
        cout << "Iterative LCA not found\n";

    return 0;
}