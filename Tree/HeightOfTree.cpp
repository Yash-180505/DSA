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
int heightTree(Node*root){
      if(root==NULL) return 0;

      int left=heightTree(root->left);
      int right=heightTree(root->right);


      return max(left,right)+1;

}
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Height of the tree is: " << heightTree(root);

    return 0;
}