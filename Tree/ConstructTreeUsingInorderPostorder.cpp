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

Node* solve(vector<int>& inorder, vector<int>& postorder,
            int& postorderIdx,
            unordered_map<int,int>& Inordermap,
            int InStartidx, int InEndidx, int n) {

    if(postorderIdx <0 || InStartidx > InEndidx)
        return NULL;

    int element = postorder[postorderIdx--];
    Node* root = new Node(element);

    int position = Inordermap[element];

    
    root->right = solve(inorder, postorder, postorderIdx,
                        Inordermap, position + 1, InEndidx, n);

    root->left = solve(inorder, postorder, postorderIdx,
                       Inordermap, InStartidx, position - 1, n);


    return root;
}

Node* constructTreeUsingInorderPostorder(vector<int>& inorder,
                                        vector<int>& postorder, int n) {
    int postOrderIndex = n-1;
    unordered_map<int,int> Inordermap;

    mapIndex(inorder, Inordermap);

    return solve(inorder, postorder, postOrderIndex,
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
    vector<int> postorder = {4, 5, 2, 6, 3, 1};

    Node* root = constructTreeUsingInorderPostorder(inorder, postorder, inorder.size());

    LevelPrint(root);
}
