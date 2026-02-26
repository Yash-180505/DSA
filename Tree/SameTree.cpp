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


bool isSameTree(Node*a,Node*b){
      if(a==NULL &&b==NULL) return true;
      if(a==NULL || b==NULL) return false;

      if(a->data!=b->data) return false;

      return isSameTree(a->left,b->left) && isSameTree(a->right,b->right);
}

int main() {

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);

    if(isSameTree(root1, root2))
        cout << "Trees are same\n";
    else
        cout << "Trees are not same\n";

    return 0;
}