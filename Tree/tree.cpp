#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
       int data;
       Node*left=NULL;
       Node*right=NULL;

       Node(int d){
          data=d;
       }
};

void PrintTree(Node*root){
      if(root==NULL) return ;

      queue<Node*>q;
      q.push(root);

      while(!q.empty()){
         Node*frontNode=q.front();
         q.pop();

   cout<<frontNode->data<<" ";
     if(frontNode->left)q.push(frontNode->left);
     if(frontNode->right)q.push(frontNode->right);

      }
}



int main(){
 Node*root=new Node(1);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->right->left=new Node(6);
  root->right->right=new Node(7);


  PrintTree(root);

}