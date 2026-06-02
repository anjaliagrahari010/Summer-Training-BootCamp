#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;

  
};


void createList(Node* &head, int n){
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
Node *mergeSortList(Node *head1,Node *head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node *l1=head1;
    Node *l2=head2;
    Node *head;

    if(l1->data<=l2->data){
        head=l1;
        l1=l1->next;
    }
    else{
        head=l2;
        l2=l2->next;
    }

    struct Node *temp=head;
    while(l1!=NULL && l2!=NULL){
        if(l1->data < l2->data){
            temp->next=l1;
            l1=l1->next;
        }
        else{
            temp->next=l2;
            l2=l2->next;
        }
        temp=temp->next;
    }
    if(l1!=NULL){
        temp->next=l1;
    }
    else{
        temp->next=l2;
    }
    return head;
}

void display(Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node *head1=NULL;
    Node *head2=NULL;
    int n1,n2;
    cin>>n1;
    createList(head1,n1);
    cin>>n2;
    createList(head2,n2);

    Node *mergeHead=mergeSortList(head1,head2);
    cout<<"Merged Two Sorted LInkedlist:"<<endl;
    display(mergeHead);
    return 0;
}