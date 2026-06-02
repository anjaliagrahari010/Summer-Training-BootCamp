#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head=NULL;

void createList(int n){
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

int countOccurrences(int key){
    int count = 0;

    while(head != NULL){
        if(head->data == key){
            count++;
        }
        head = head->next;
    }

    return count;
}

int main(){
    
    int n, key;

    cin >> n;
    createList(n);

    cin >> key;

    cout << "Occurrences of " << key << " = "
         << countOccurrences(key);

    return 0;
}