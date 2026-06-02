#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    int n;
    cin>>n;
    int val;
    Node *head=NULL;
    Node*temp=head;
    for(int i=0;i<n;i++){
        cin>>val;
        Node *new_node=new Node(val);
        if(head==NULL){
            head=new_node;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    Node *curr=head;
    Node *prev=NULL;
    Node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    Node *p=head;
    while(p!=NULL){
        cout<<p->data;
        p=p->next;
    }
    return 0;
    
}