#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

void createList(Node * &head,int n){
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
void createIntersectionPoint(Node* &head1, Node* &head2,int pos){
    Node *p=head1;
    Node *i=head2;
    
    for(int i=1;i<=pos;i++){
        p=p->next;
    }
    while(i->next!=NULL){
        i=i->next;
    }
    i->next=p;

}
int intersectionPoint(Node* &head1, Node* &head2){

    if(head1==NULL||head2==NULL){
        return -1;
    }
    Node *temp=head1;
    Node *temp1=head2;
    while(temp!=temp1){
        if(temp==NULL){
            temp=head2;
        }
        else{
            temp=temp->next;
        }
        if(temp1==NULL){
            temp1=head1;
        }
        else{
            temp1=temp1->next;
        }
    }
    

    if(temp == NULL)
    return -1;

    return temp->data;
}
int main(){
    int n1,n2;
    Node *head1=NULL;
    Node *head2=NULL;
    cin>>n1;
    createList(head1,n1);
    cin>>n2;
    createList(head2, n2);
    int pos;
    cin>>pos;
    createIntersectionPoint(head1,head2,pos);
    cout<<"Intersection Node of two linkedlist: "<<endl;
    cout<<intersectionPoint(head1,head2);


}

