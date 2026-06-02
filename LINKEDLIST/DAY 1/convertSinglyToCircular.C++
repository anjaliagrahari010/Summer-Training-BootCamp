#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void createList(Node* &head, int n){
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

void convertToCircular(Node *head){
    if(head == NULL)
        return;

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = head;   // Last node points to head
}

void displayCircular(Node *head){
    if(head == NULL)
        return;

    Node *temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
}

int main(){
    Node *head = NULL;
    int n;

    cin >> n;
    createList(head, n);

    convertToCircular(head);

    cout << "Circular Linked List: ";
    displayCircular(head);

    return 0;
}