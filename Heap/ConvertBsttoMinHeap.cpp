#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

int countNode(Node*root){
      if(root==NULL){
          return 0;
      }

      return 1+countNode(root->left)+countNode(root->right);
}

void InorderTraversal(vector<int>&inorder,Node*root){
      if(root==NULL) return ;

      InorderTraversal(inorder,root->left);
      inorder.push_back(root->data);
      InorderTraversal(inorder,root->right);


}

void fillPreorder(Node*&root,vector<int>inorder,int index){
     root->data=inorder[index++];
     fillPreorder(root->left,inorder,index);
     fillPreorder(root->right,inorder,index);

}
Node *BSTtoMinHeap(Node *root)
{  
    vector<int>inorder;
    InorderTraversal(inorder,root);


    fillPreorder(root,inorder,0);

    return root;


}
vector<vector<int>>  BFS(Node*root){
      vector<vector<int>>ans;

      if(root==NULL) return ans;

      queue<Node*>q;
      q.push(root);

      while(!q.empty()){
          int size=q.size();
          vector<int>lvl(size);
          for(int i=0;i<size;i++){
               Node*front=q.front();
               q.pop();

               lvl.push_back(front->data);

               if(front->left) q.push(root->left);
               if(front->right) q.push(root->right);
          }
          ans.push_back(lvl);
      }


      return ans;

}

int main()
{     Node*root=new Node(4);
      root->left=new Node(2);
      root->right=new Node(6);
      root->left->left=new Node(1);
      root->left->right=new Node(3);
      root->right->left=new Node(5);
      root->right->right=new Node(7);
  cout<<"Before :"<<endl;
  vector<vector<int>>ans=BFS(root);

  for(auto x :ans){
       for(auto i :x){
          cout<<i <<" ";
       }
       cout<<endl;
  }
      root=BSTtoMinHeap(root);


       cout<<"After:"<<endl;
  vector<vector<int>>ans1=BFS(root);

  for(auto x :ans1){
       for(int i :x){
          cout<<i <<" ";
       }
       cout<<endl;
  }
}