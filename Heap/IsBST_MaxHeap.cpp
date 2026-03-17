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

bool isCBT(Node*root,int i,int n){
      if(root==NULL) return true;

      if(i>=n) return false;

      else{
           return isCBT(root->left,2*i+1,n) && isCBT(root->right,2*i+2,n);
      }

      
}


bool isMaxOrder(Node*root){
     if(root->left==NULL && root->right==NULL) return true;

     if(root->right==NULL && root->left!=NULL){
          return root->data>root->left->data;
     }
     if(root->left!=NULL && root->right!=NULL){
          return (root->data>root->left->data)&&(root->data>root->right->data)&&(isMaxOrder(root->left))&&(isMaxOrder(root->right));
     }
      
}

int countNode(Node*root){
      if(root==NULL) return 0;

      return countNode(root->left)+countNode(root->right)+1;
}
bool isHeap(Node* root){
     int index=0;
     int totalCount=countNode(root);
     if(isCBT(root,index,totalCount)&&isMaxOrder(root)){
           return true;
     }
   return false;
}
int main(){
    Node*root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(3);


    if(isHeap(root)){
          cout<<"Tree is Heap"<<endl;
    }
    else{
          cout<<"Tree is Not Heap"<<endl;
    }


 

}