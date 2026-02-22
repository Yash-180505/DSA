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

Node* buildBST(int l, int r, vector<int>& v){
    if(l > r) return NULL;

    int mid = l + (r - l) / 2;

    Node* root = new Node(v[mid]);

    root->left = buildBST(l, mid - 1, v);
    root->right = buildBST(mid + 1, r, v);

    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){

    
    vector<int> v = {1,2,3,4,5,6,7};

    Node* root = buildBST(0, v.size()-1, v);

    cout << "Inorder of constructed BST: ";
    inorder(root);

    return 0;
}