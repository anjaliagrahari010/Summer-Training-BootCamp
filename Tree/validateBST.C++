#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};
static int idx=-1;
Node *insert(Node *root, int val){
    if(root==nullptr)
        return new Node(val);
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
void *inorder(Node *root){
    if(root==nullptr)
        return nullptr;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
class Solution {
public:
    bool helper(Node* root, long long minVal, long long maxVal) {
        if (root == NULL)
            return true;

        if (root->data <= minVal || root->data >= maxVal)
            return false;

        return helper(root->left, minVal, root->data) &&
               helper(root->right, root->data, maxVal);
    }

    bool isValidBST(Node* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};

int main(){
    int n;
    cin>>n;
    Node *root=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
    cout<<"Inorder:"<<endl;
    inorder(root);
    Solution s;
    bool ans=s.isValidBST(root);
    cout<<"Is Valid"<<ans;
    return 0;



}