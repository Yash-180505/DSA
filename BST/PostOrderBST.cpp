#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
       int data;
       Node*left;
       Node*right;
       Node(int d){
           this->data=d;
           this->left=NULL;
           this->right=NULL;
       }
};
Node* insertIntoBST(Node*root ,int data){
    if(root==NULL) {
        root=new Node(data);
        return root;
}
if(data >root->data){
       root->right=insertIntoBST(root->right,data);

}
else{
      root->left=insertIntoBST(root->left,data);
}
return root;
    
}
void PostorderBSt(Node*root){
     if(root==NULL) return;
         
     PostorderBSt(root->left);
     PostorderBSt(root->right);
     cout<<root->data<<" ";

}
void takeInput(Node*&root){
    int data;
    cin>>data;
    while (data !=-1)
    {
      root=   insertIntoBST(root,data);
         cin>>data;
    }
    
}
int main(){
  Node*root=NULL;
  cout<<"Enter the data to create BST:"<<endl;
  takeInput(root);

  cout<<"Postorder Traversal:-"<<endl;
 PostorderBSt(root);

}