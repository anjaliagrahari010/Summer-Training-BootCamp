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
void removeDuplicate(){
    Node *curr=head;
    while(curr!=NULL){
        Node *prev=curr;
        Node *ptr=curr->next;
        while(ptr!=NULL){
            if(ptr->data==curr->data){
                prev->next=ptr->next;
                Node *temp=ptr;
                ptr=ptr->next;
                delete temp;
                
            }
            else{
                prev=ptr;
                ptr=ptr->next;
            }
        }
        curr=curr->next;
    }
}
void display(){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main(){
    int n;
    cin>>n;
    create(n);
    removeDuplicate();
    display();
    return 0;
}
