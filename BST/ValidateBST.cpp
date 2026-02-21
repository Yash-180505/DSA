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

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertIntoBST(root->right, data);
    }
    else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(Node*& root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

bool isBST(Node* root, long long minVal, long long maxVal){
    if(root == NULL) return true;

    if(root->data > minVal && root->data < maxVal){
        bool left = isBST(root->left, minVal, root->data);
        bool right = isBST(root->right, root->data, maxVal);
        return left && right;
    }
    else{
        return false;
    }
}

bool isValidBST(Node* root){
    return isBST(root, LLONG_MIN, LLONG_MAX);
}

int main(){

    Node* root = NULL;

    cout << "Enter data to create BST (-1 to stop): ";
    takeInput(root);

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nPostorder Traversal: ";
    postorder(root);

    if(isValidBST(root)){
        cout << "\n\nTree is a Valid BST";
    }
    else{
        cout << "\n\nTree is NOT a Valid BST";
    }

    return 0;
}