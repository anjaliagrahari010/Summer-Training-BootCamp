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
    if(preorder[idx] == -1)
        return NULL;

    Node *root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
int height(Node *root){
        if(root==NULL)
            return 0;
        int leftht=height(root->left);
        if(leftht==-1)
            return -1;
        int rightht=height(root->right);
        if(rightht==-1)
            return -1;
        if(abs(leftht-rightht)>1)
            return -1;
        return max(leftht,rightht)+1;
        
    }
bool isBalanced(Node* root) {
        return height(root)!=-1;
}

int main(){
     int n;
    cin>>n;
    vector<int>preorder(n);
    for(int i=0;i<n;i++){
        cin>>preorder[i];
    }
    idx=-1;
    Node *root=buildTree(preorder);
    if(isBalanced(root))
        cout<<"Balanced";
    else{
        cout<<"Not Balanced";
    }
    return 0;
}
