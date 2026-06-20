#include<iostream>
#include<vector>
#include<queue>
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
Node *buildTree(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Node *root=new Node(val);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
// Left View
vector<int>leftView(Node *root){
    vector<int>ans;
    if(root==NULL)
        return ans;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node *curr=q.front();
            q.pop();
            if(i==0){
                ans.push_back(curr->data);
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right)
                q.push(curr->right);

        }
    }
    return ans;
}
// right view
vector<int>rightView(Node *root){
    vector<int>ans;
    if(root==NULL)
        return ans;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node *curr=q.front();
            q.pop();
            if(i==n-1){
                ans.push_back(curr->data);
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right)
                q.push(curr->right);

        }
    }
    return ans;
}
int main(){
    Node *root=buildTree();
    vector<int>lv=leftView(root);
    cout<<"Left View-"<<" ";
    for(int x:lv){
        cout<<x;
    }
    cout<<endl;
    vector<int>rv=rightView(root);
    cout<<"Right View-"<<" ";
    for(int x:rv){
        cout<<x;
    }
    return 0;

    
}