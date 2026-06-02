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
    int val;
    Node *head=NULL;
    while(val!=-1){
        cin>>val;
        Node *new_node=new Node(val);
        if(head==NULL){
            head=new_node;
        }
        else{
            Node *t=head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=new_node;
            new_node->next=NULL;
        }
    }
    int count =0;
    Node *temp=head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<count;
    return 0;


}