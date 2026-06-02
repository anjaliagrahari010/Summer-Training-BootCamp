#include<iostream>
using namespace std;

struct Node {
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
    int pos;
    cin>>pos;
    if(pos>0){
        Node *last=head;
        Node *join=head;
        for(int i=0;i<pos;i++){
            join=join->next;
        }
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=join;
    }
}

bool hasCycle(){
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
    }
    }
    return false;
    
}

int main(){
    int n;
    cin>>n;
    createList(n);
    cout<<"Whether this linkedlist has cycle or loop?"<<endl;
    
   if(hasCycle())
    cout << "Cycle Detected";
else
    cout << "No Cycle";
    return 0;
}