
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

Node* buildBST(vector<int>& preorder, int mini, int maxi, int &i){
    
    if(i >= preorder.size())
        return NULL;

    if(preorder[i] < mini || preorder[i] > maxi)
        return NULL;

    Node* root = new Node(preorder[i++]);

    root->left = buildBST(preorder, mini, root->data, i);
    root->right = buildBST(preorder, root->data, maxi, i);

    return root;
}

Node* bstFromPreorder(vector<int>& preorder){
    int i = 0;
    return buildBST(preorder, INT_MIN, INT_MAX, i);
}


void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){

    vector<int> preorder = {8,5,1,7,10,12};

    Node* root = bstFromPreorder(preorder);

    cout << "Inorder traversal of constructed BST: ";
    inorder(root);

    return 0;
}