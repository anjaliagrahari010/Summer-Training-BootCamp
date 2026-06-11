#include<iostream>
#include<list>
#include <unordered_map>
using namespace std;

class Node{
    public:
            int data;
            Node *prev;
            Node *next;
            Node *child;
            Node(int val){
                data=val;
                prev=NULL;
                next=NULL;
                child=NULL;
            }
};
class Solution{
    public:
        Node *flatten(Node *head){
            if(head==NULL)
                return head;
            Node *curr=head;
            while(curr!=NULL){
                if(curr->child!=NULL){
                    Node *temp=curr->next;
                    curr->next=flatten(curr->child);
                    curr->next->prev=curr;
                    curr->child=NULL;
                    // Tail
                    while(curr->next!=NULL){
                        curr=curr->next;

                    }
                    if(temp!=NULL){
                        curr->next=temp;
                        temp->prev=curr;
                    }
                }
                curr=curr->next;
            }
            return head;
        }
};
void printList(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main() {
    int n;
    cout << "Enter size of main list: ";
    cin >> n;

    Node *head = NULL, *tail = NULL;
    unordered_map<int, Node*> mp;

    cout << "Enter main list values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);
        mp[x] = newNode;

        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int parent;
    cout << "Attach child list to which node value? ";
    cin >> parent;

    int m;
    cout << "Enter child list size: ";
    cin >> m;

    Node *childHead = NULL, *childTail = NULL;

    cout << "Enter child list values: ";
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if (!childHead) {
            childHead = childTail = newNode;
        } else {
            childTail->next = newNode;
            newNode->prev = childTail;
            childTail = newNode;
        }
    }

    mp[parent]->child = childHead;

    Solution obj;
head = obj.flatten(head);

    cout << "Flattened List: ";
    printList(head);

    return 0;
}