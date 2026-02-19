#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}
void InorderBSt(Node *root)
{
    if (root == NULL)
        return;
    InorderBSt(root->left);
    cout << root->data << " ";
    InorderBSt(root->right);
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}



Node *DeleteBST(Node *root, int key)
{
    if (root == NULL)
        return root;

    if (root->data == key)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            Node *temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = DeleteBST(root->right, temp->data);
            return root;
        }
    }
    else if (root->data > key)
    {
        root->left = DeleteBST(root->left, key);
        return root;
    }
    else
    {
        root->right = DeleteBST(root->right, key);
        return root;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter the data to create BST:" << endl;
    takeInput(root);

    cout << "Inorder Traversal Before Delete:-" << endl;
    InorderBSt(root);
    int key = 30;
   
     root= DeleteBST(root,key);
cout << "\nInorder Traversal After Delete:-" << endl;
    InorderBSt(root);
     
}