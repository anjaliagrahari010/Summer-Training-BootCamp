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
    if(preorder[idx]==-1){
        return NULL;
    }
    Node *root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);

    return root;
}

class Invert{
    public:
        Node *invertTree(Node *root){
            if(root==NULL)
                return NULL;

            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);
        
        return root;
        }
};
void inorderTraversal(Node *root){
    if(root==NULL)
        return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);


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
    Invert obj;
    root=obj.invertTree(root);

    cout<<"After Invert"<<" ";
    inorderTraversal(root);
    cout<<endl;
    return  0;
    
}
