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

vector<vector<int>> ReverseLevelPrint(Node*root){
       if(root==NULL) return {};
  vector<int>level;
  vector<vector<int>>ans;
  queue<Node*>q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
     Node*frontNode=q.front();
     q.pop();

     if(frontNode==NULL){
          ans.push_back(level);
          level.clear();
          if(!q.empty()){
              q.push(NULL);
          }
     }
     else{
        
          level.push_back(frontNode->data);
           if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);

     }
   }
        return ans;

}
int main(){
 Node*root=new Node(1);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->right->left=new Node(6);
  root->right->right=new Node(7);
 vector<vector<int>>ans=ReverseLevelPrint(root);



for(int i=ans.size()-1;i>=0;i--){
      for(int x:ans[i]){
           cout<<x<<" ";
      }
      cout<<endl;
}


}