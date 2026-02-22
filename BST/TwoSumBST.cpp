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
void inorder(Node*root,vector<int>&ans){
      if(root==NULL) return ;

      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
}

pair<int,int> TwoSumBST(Node*root,int target){
       vector<int>ans;
       inorder(root,ans);

       int i=0;
       int j=ans.size()-1;
       while(i<j){
          int sum=ans[i]+ans[j];
          if(sum==target) return {ans[i],ans[j]};

          else if(sum>target) j--;
          else i++;
       }
    return {-1,-1};
}

int main(){

    Node* root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);

    root->left->left = new Node(1);
    root->left->right = new Node(6);

    root->left->right->left = new Node(4);
    root->left->right->right = new Node(7);

    root->right->right = new Node(14);
    root->right->right->left = new Node(13);

    int target = 17;

    pair<int,int> result = TwoSumBST(root, target);

    if(result.first == -1)
        cout << "No pair found" << endl;
    else
        cout << "Pair found: " << result.first << " , " << result.second << endl;

    return 0;
}