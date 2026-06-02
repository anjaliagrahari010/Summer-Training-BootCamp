#include<iostream>
#include<list>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;

    Node(int val){
    data=val;
    prev=NULL;
    next=NULL;
}
};

int main(){
    int n;
    cin>>n;
    Node *head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node *new_node=new Node(x);
        if(head==NULL){
            head=tail=new_node;
        }
        else{
            tail->next=new_node;
            new_node->prev=tail;
            tail=new_node;
        }
    }
    int index,newPrice;
    cin>>index;
    cin>>newPrice;

    Node *temp=head;
    int pos=0;
    while(temp!=NULL ){
        if(pos==index){
            temp->data=newPrice;
            break;
        }
        temp=temp->next;
        pos++;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<" ";

        }
        temp=temp->next;
    }
return 0;
    

}


