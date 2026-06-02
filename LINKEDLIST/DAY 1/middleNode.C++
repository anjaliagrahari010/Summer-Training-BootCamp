#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;

    
};
struct Node *head=NULL;
void createList(int n){
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
            temp->next=new_node;
            temp=new_node;
        }
    }
}

int middleElement(){
    struct Node*slow=head;
    struct Node *fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}

int main(){
    int n;
    cin>>n;
    createList(n);
    cout<<"The middle element of linkedlist:"<<endl;
    int mid=middleElement();
    cout<<mid;
    return 0;
}