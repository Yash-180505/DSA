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

void dfs(Node*root,string path,vector<string>&ans){
     if(root==NULL) return ;

     path+=to_string(root->data);
     if(root->left ==NULL && root->right==NULL){
         ans.push_back(path);  
        return ;
     }

     path+="->";
     dfs(root->left,path,ans);
     dfs(root->right,path,ans);
}

vector<string>TreePath(Node*root){
      vector<string>ans;
      dfs(root,"",ans);
      return ans;
   
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    vector<string> paths = TreePath(root);

    for(string s : paths){
        cout << s << endl;
    }

    return 0;
}
