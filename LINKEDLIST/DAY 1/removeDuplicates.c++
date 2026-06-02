#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
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

void removeDuplicates(){
    Node *curr = head;

    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
}

void display(){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    Node *head = NULL;
    int n;

    cin >> n;
    createList(n);

    removeDuplicates();

    cout << "Linked List after removing duplicates:\n";
    display();

    return 0;
}