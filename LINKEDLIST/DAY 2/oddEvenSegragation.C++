#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;

void create(int n){
    Node *new_node,*temp;
    for(int i=0;i<n;i++){
        new_node=new Node;
        cin>>new_node->data;
        new_node->next=NULL;
        if(head==NULL){
            head=new_node;
            temp=head;
        }
        else{
            new_node->next=head;
            head=new_node;
        }
    }
}

void segregate(){
    Node *evenList=NULL;
    Node *oddList=NULL;
    Node *evenTail=NULL;
    Node *oddTail=NULL;
    Node *temp=head;
    while(temp!=NULL){
        Node *nextNode=temp->next;
        temp->next=NULL;
        if(temp->data%2==0){
            if(evenList==NULL){
            evenList=evenTail=temp;
            }
            else{
            evenTail->next=temp;
            evenTail=temp;
            }
        }
        else{
            if(oddList==NULL){
                oddList=oddTail=temp;
            }
            else{
                oddTail->next=temp;
                oddTail=temp;
            }
        }
        temp=nextNode;
        
            
    }
    evenTail->next=oddList;
    head=evenList;
}

void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cin>>n;
    create(n);
    segregate();
    display();
    return 0;

}