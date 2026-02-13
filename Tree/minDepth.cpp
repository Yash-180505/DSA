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


int minDepth(Node*root){
      if(root==NULL)  return 0;

      queue<Node*>q;
      q.push(root);
      int depth=1;


      while(!q.empty()){
           int size=q.size();

           for(int i=0;i<size;i++){
              Node*frontNode=q.front();
              q.pop();

              if(frontNode->left==NULL && frontNode->right==NULL) return depth;

              if(frontNode->left) q.push(frontNode->left);
              if(frontNode->right) q.push(frontNode->right);
           }
           depth++;

      }

      return depth;
}


int main(){
    /*
          1
         / \
        2   3
       /
      4
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Minimum Depth of Binary Tree: "
         << minDepth(root) << endl;

    return 0;
}
