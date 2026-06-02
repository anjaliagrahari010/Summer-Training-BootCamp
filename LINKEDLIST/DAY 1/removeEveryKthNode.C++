#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
Node *head=NULL;

void createList( int n){
    Node *new_node, *temp;

    for(int i=0; i<n; i++){
        new_node = new Node;
        cin >> new_node->data;
        new_node->next = NULL;

        if(head == NULL){
            head = new_node;
            temp = head;
        }
        else{
            temp->next = new_node;
            temp = new_node;
        }
    }
}

void removeEveryKthNode(int k){
    if(head==NULL || k<0){
        return;
    }
    if(k==1){
        while(head){
            Node *temp=head;
            head=head->next;
            delete temp;
        }
        return;
    }
    int count=1;
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        if(count%k==0){
            prev->next=curr->next;
            Node *temp=curr;
            curr=curr->next;
            delete temp;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
        count++;
    }
    

}

void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n,k;
    cin>>n;
    createList(n);
    cin>>k;
    cout<<"After Removing every kth node:"<<endl;
    removeEveryKthNode(k);
    display();
    return 0;
}
