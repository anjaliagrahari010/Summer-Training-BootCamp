#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;

        }
};
Node* buildTree() {
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node* root = new Node(val);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}
class Solution {
public:
    bool sum(Node
 *root, int s, int targetSum){
        if(root==NULL)
            return false;
        s+=root->data;
        if(root->left==NULL && root->right==NULL){
            if(s==targetSum)
                return true;
        }
        return sum(root->left,s,targetSum) || sum(root->right,s,targetSum);
    }
    bool hasPathSum(Node* root, int targetSum) {
        return sum(root,0,targetSum);
        
    }
};
int main(){
    Node* root = buildTree();

    int targetSum;
    cout << "Enter target sum: ";
    cin >> targetSum;

    Solution obj;

    if (obj.hasPathSum(root, targetSum))
        cout << "Path Exists\n";
    else
        cout << "Path Does Not Exist\n";

    return 0;
}