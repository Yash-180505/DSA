#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root, vector<int>& v) {
    if (root == NULL) return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

vector<int> mergeTwoList(const vector<int>& a, const vector<int>& b) {
    if (a.empty()) return b;
    if (b.empty()) return a;

    vector<int> ans;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] >= b[j]) {
            ans.push_back(b[j]);
            j++;
        } else {
            ans.push_back(a[i]);
            i++;
        }
    }

    while (i < a.size()) {
        ans.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        ans.push_back(b[j]);
        j++;
    }

    return ans;
}

Node* buildBST(int l, int r, vector<int>& inorderArr) {
    if (l > r) return NULL;

    int mid = l + (r - l) / 2;

    Node* root = new Node(inorderArr[mid]);

    root->left = buildBST(l, mid - 1, inorderArr);
    root->right = buildBST(mid + 1, r, inorderArr);

    return root;
}

Node* mergeBST(Node* root1, Node* root2) {
    vector<int> a, b;

    inorder(root1, a);
    inorder(root2, b);

    vector<int> merged = mergeTwoList(a, b);

    return buildBST(0, merged.size() - 1, merged);
}

void printInorder(Node* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {

    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node* root2 = new Node(3);
    root2->left = new Node(0);
    root2->right = new Node(5);

    Node* mergedRoot = mergeBST(root1, root2);

    cout << "Inorder of merged BST: ";
    printInorder(mergedRoot);

    return 0;
}