#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;

void createList(int n){
    Node *new_node,*temp;
    for(int i=0;i<n;i++){
        new_node = new Node;
        cin>>new_node->data;
        new_node->next=NULL;

        if(head==NULL){
            head=new_node;
            temp=head;
        }
        else{
            temp->next=new_node;
            temp=new_node;
        }
    }
}
bool isPalindrome() {

    if(head==NULL)
        return true;

     Node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node *prev=NULL, *next=NULL, *curr=slow;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    Node *temp=head, *temp1=prev;
    while(temp1!=NULL){
        if(temp->data!=temp1->data)
            return false;
        temp=temp->next;
        temp1=temp1->next;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    createList(n);
    cout<<"Whether Linkedlist is pallindromic or not?"<<endl;
    cout<<isPalindrome();
}