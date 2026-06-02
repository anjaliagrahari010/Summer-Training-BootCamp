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
Node *add(Node* &head1,Node* &head2){
    Node* list=NULL;
    Node *temp=NULL;
    int carry=0;
    while(head1!=NULL || head2!=NULL || carry){
        int sum=carry;
        if(head1!=NULL){
            sum+=head1->data;
            head1=head1->next;
        }
        if(head2!=NULL){
            sum+=head2->data;
            head2=head2->next;
        }
        carry=sum/10;
        Node *new_node=new Node;
        new_node->data=sum%10;
        new_node->next=NULL;
        if(list==NULL){
            list=new_node;
            temp=list;
        }
        else{
            temp->next=new_node;
            temp=temp->next;
        }
    }
    return list;
}
void display(Node *head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    int n1;
    Node *head1=NULL;
    Node *head2=NULL;
    cin>>n1;
    createList(head1,n1);
    int n2;
    cin>>n2;
    createList(head2,n2);
    
    Node *result = add(head1, head2);
    cout<<"Addition of two linkedlist: "<<endl;
    display(result);
    return 0;
}

 