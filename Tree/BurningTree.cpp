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

Node*createParentmapping(Node*root,int target,map<Node*,Node*>&nodeToParent)
{   Node*res=NULL;
    queue<Node*>q;

    q.push(root);
nodeToParent[root]=NULL;
    while(!q.empty()){
        Node*frontNode=q.front();
        q.pop();


        if(frontNode->data==target){
               res=frontNode;
        }

        if(frontNode->left)  {nodeToParent[frontNode->left]=frontNode;
        
            q.push(frontNode->left);
        }
          
         if(frontNode->right){  nodeToParent[frontNode->right]=frontNode;
          q.push(frontNode->right);}
    }

    return res;

}

int burnTree(Node*targetNode,map<Node*,Node*>&nodeToParent ){
   map<Node*,bool>visited;
   queue<Node*>q;
        
   q.push(targetNode);
   visited[targetNode]=true;

   int ans=0;

   while(!q.empty()){
      bool flag = false;
        int size=q.size();
        for(int i=0;i<size;i++){
              Node*front=q.front();
              q.pop();

              if(front->left && !visited[front->left]){
                  flag=1;
                    q.push(front->left);
                    visited[front->left]=true;
              }

               if(front->right && !visited[front->right]){
                 flag=1;
                    q.push(front->right);
                    visited[front->right]=true;
              }

              if(nodeToParent[front]&& !visited[nodeToParent[front]]){
                 flag=1;
                   q.push(nodeToParent[front]);
                   visited[nodeToParent[front]]=true;
              }
        }
        if(flag==1){
              ans++;
        }
   }
   return ans;

}
int minTime(Node*root,int target){

    
    map<Node*,Node*>nodeToParent;
    Node *TargetNode=createParentmapping(root,target,nodeToParent);
       

    if(TargetNode == NULL) return 0;
 int   ans= burnTree(TargetNode,nodeToParent);
    return ans;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    int target = 5;

    cout << minTime(root, target);

    return 0;
}
