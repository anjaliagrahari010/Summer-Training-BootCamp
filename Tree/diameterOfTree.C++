#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int val){
            data=val;
            left=right=NULL;

        }
};
static int idx=-1;
Node *buildTree(vector<int>&preorder){
    idx++;
    if(preorder[idx]==-1)
        return NULL;
    Node *root=new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right=buildTree(preorder);

return root;
}
class Solution{
    public:
        int d=0;
        int height(Node *root){
            if(root==NULL)
                return 0;
            int lh=height(root->left);
            int rh=height(root->right);
            d = max(d, lh + rh);
            return 1+max(lh,rh);
        }

        int diameter(Node *root){
            height(root);
            return d;
        }
};
int main(){
    int n;
    cin>>n;
    vector<int>preorder(n);
    for(int i=0;i<n;i++){
        cin>>preorder[i];
    }
    idx=-1;
    Node *root=buildTree(preorder);
    Solution s;
    int diameter=s.diameter(root);
    cout<<diameter;
    return 0;
}
