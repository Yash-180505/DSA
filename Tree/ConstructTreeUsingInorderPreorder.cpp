#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = right = NULL;
    }
};

void mapIndex(vector<int>& inorder,
              unordered_map<int,int>& Inordermap) {
    for(int i = 0; i < inorder.size(); i++) {
        Inordermap[inorder[i]] = i;
    }
}

Node* solve(vector<int>& inorder, vector<int>& preorder,
            int& preorderIdx,
            unordered_map<int,int>& Inordermap,
            int InStartidx, int InEndidx, int n) {

    if(preorderIdx >= n || InStartidx > InEndidx)
        return NULL;

    int element = preorder[preorderIdx++];
    Node* root = new Node(element);

    int position = Inordermap[element];

    root->left = solve(inorder, preorder, preorderIdx,
                       Inordermap, InStartidx, position - 1, n);

    root->right = solve(inorder, preorder, preorderIdx,
                        Inordermap, position + 1, InEndidx, n);

    return root;
}

Node* constructTreeUsingInorderPreorder(vector<int>& inorder,
                                        vector<int>& preorder, int n) {
    int preOrderIndex = 0;
    unordered_map<int,int> Inordermap;

    mapIndex(inorder, Inordermap);

    return solve(inorder, preorder, preOrderIndex,
                 Inordermap, 0, n - 1, n);
}

void LevelPrint(Node*root){
       if(root==NULL) return ;

  queue<Node*>q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
     Node*frontNode=q.front();
     q.pop();

     if(frontNode==NULL){
          cout<<endl;
          if(!q.empty()){
              q.push(NULL);
          }
     }
     else{
        cout<<frontNode->data<<" ";
           if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);

     }

   }
       

}

int main() {
    vector<int> inorder = {4, 2, 5, 1, 6, 3};
    vector<int> preorder = {1, 2, 4, 5, 3, 6};

    Node* root = constructTreeUsingInorderPreorder(inorder, preorder, inorder.size());

    LevelPrint(root);
}
