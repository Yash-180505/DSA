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


void LevelOrder(Node*root){
      if(root==NULL) return;

      queue<Node*>q;
      q.push(root);
      q.push(NULL);
      while(!q.empty()){
         Node*frontNode=q.front();
         q.pop();

         if(frontNode==NULL){
               cout<<endl;
               if(!q.empty())
                q.push(NULL);
         }
         else{

         
         cout<<frontNode->data<<" ";
         if(frontNode->left){
              q.push(frontNode->left);

         }
           if(frontNode->right){
              q.push(frontNode->right);
              
         }
        }
      }
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

pair<int,int> SuccessorAndPredecessor(Node*root,int key){
      Node*temp=root;
      int pred=-1;
      int succ=-1;
      while(temp && temp->data !=key){
          if(key>temp->data){
             pred=temp->data;  
            temp=temp->right;
          }
          if(key<temp->data){
              succ=temp->data;
              temp=temp->left;
          }
      }

      Node*leftTree=temp->left;
      while(leftTree){
         pred=leftTree->data;
         leftTree=leftTree->right;
      }

      Node*rightTree=temp->right;
      while(rightTree){
          succ=rightTree->data;
          rightTree=rightTree->left;
      }

      return { pred,succ};
}
int main(){
  Node*root=NULL;
  cout<<"Enter the data to create BST:"<<endl;
  takeInput(root);

   int key =30;
  pair<int,int>ans=  SuccessorAndPredecessor(root,key);
  cout<<"Predecessor And Successor:"<<ans.first<<" "<<ans.second<<endl;


}