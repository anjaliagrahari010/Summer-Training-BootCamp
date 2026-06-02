#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void createList(Node* &head, int n){
    Node *temp, *newNode, *last;

    for(int i=1; i<=n; i++){
        newNode = new Node;
        cin >> newNode->data;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            last = newNode;
        }
        else{
            last->next = newNode;
            last = newNode;
        }
    }

    last->next = head; 
}

void deleteAtPosition(Node* &head, int pos){
    if(head == NULL){
        cout << "List is empty";
        return;
    }

    if(pos == 1){
        Node* temp = head;

        if(head->next == head){
            head = NULL;
            delete temp;
            return;
        }

        Node* last = head;
        while(last->next != head)
            last = last->next;

        head = head->next;
        last->next = head;
        delete temp;
        return;
    }

    Node *curr = head, *prev = NULL;

    for(int i=1; i<pos; i++){
        prev = curr;
        curr = curr->next;

        if(curr == head){
            cout << "Invalid Position";
            return;
        }
    }

    prev->next = curr->next;
    delete curr;
}

void display(Node* head){
    if(head == NULL){
        cout << "List is empty";
        return;
    }

    Node* temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
}

int main(){
    Node* head = NULL;
    int n, pos;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";
    createList(head, n);

    cout << "Circular List: ";
    display(head);

    cout << "\nEnter position to delete: ";
    cin >> pos;

    deleteAtPosition(head, pos);

    cout << "After Deletion: ";
    display(head);

    return 0;
}