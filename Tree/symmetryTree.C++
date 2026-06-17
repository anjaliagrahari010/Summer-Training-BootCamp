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
bool  isMirror(Node *p, Node *q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL)  
        return false;
    if(p->data!=q->data)
        return false;
    return isMirror(p->left, q->right) && isMirror(p->right, q->left);

}

bool symmetricTree(Node *root){
    if(root==NULL)
        return true;
    return isMirror(root->left,root->right);
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
    if(symmetricTree(root))
        cout<<"Symmetric";
    else
        cout<<"Not Symmetric";
    
    return 0;


}