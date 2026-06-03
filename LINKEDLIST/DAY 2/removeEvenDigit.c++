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
        int val;
       cin>>val;
        if(val%2!=0){
            new_node=new Node;
            new_node->data=val;
            new_node->next=NULL;
            if(head==NULL){
                head=new_node;
                temp=head;
                head->next=head;
            }
            else{
                new_node->next=head;
                temp->next=new_node;
                temp=new_node;
            }
        }
       
        
    }
}
void display(){
    if(head == NULL)
        return;

    Node *temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
}

int main(){
    int n;
    cin>>n;
    create(n);
    display();
    return 0;
}