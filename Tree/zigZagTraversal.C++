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
            left=right=NULL;
        }
};

Node *buildTree(){
    int val;
    cin>>val;
    if(val==-1)
        return NULL;
    Node *root=new Node(val);
    root->left=buildTree();
    root->right=buildTree();
    return root;

}
class Solution{
    public: 
        vector<int>zigZagTraversal(Node *root){
            vector<int>ans;
            if(root==NULL)
                return ans;
            queue<Node*>q;
            bool lefttoright=true;
            q.push(root);
            while(q.size()>0){
                int n=q.size();
                vector<int>level(n);
                for(int i=0;i<n;i++){
                    Node *curr=q.front();
                    q.pop();
                    int index;
                    if(lefttoright)
                        index=i;
                    else    
                        index=n-1-i;
                    level[index]=curr->data;
                    if(curr->left!=NULL)
                        q.push(curr->left);
                    if(curr->right!=NULL)
                        q.push(curr->right);
                }

                for(int x:level)
                    ans.push_back(x);
                lefttoright=!lefttoright;
            }
            return ans;
        }
};
int main(){
    Node *root=buildTree();
    Solution obj;
    vector<int>res=obj.zigZagTraversal(root);
    for(int x:res)
        cout<<x;
    return 0;
}