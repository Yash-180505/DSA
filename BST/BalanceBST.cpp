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

int height(Node* root){ 
    if(root == NULL) return 0;

    int left = height(root->left);
    if(left == -1) return -1;

    int right = height(root->right);
    if(right == -1) return -1;

    if(abs(left - right) > 1) return -1;

    return max(left, right) + 1;
}

bool BalanceBST(Node* root){
    return height(root) != -1;
}

int main(){


    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    if(BalanceBST(root1))
        cout << "Tree 1 is Balanced\n";
    else
        cout << "Tree 1 is NOT Balanced\n";


  
    Node* root2 = new Node(1);
    root2->right = new Node(2);
    root2->right->right = new Node(3);
    root2->right->right->right = new Node(4);

    if(BalanceBST(root2))
        cout << "Tree 2 is Balanced\n";
    else
        cout << "Tree 2 is NOT Balanced\n";

    return 0;
}