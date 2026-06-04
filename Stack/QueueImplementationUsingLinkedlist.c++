#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
        
        Node(int val){
            data=val;
            next=NULL;
        }
};
class Queue{
    Node *rear,*front;
    public:
        Queue(){
            rear=front=NULL;
        }
        void enqueue(int val){
            Node *new_node=new Node(val);
                if(rear==NULL){
                    front=rear=new_node;
                }
                else{
                    rear->next=new_node;
                    rear=new_node;
                }
                cout<<val<<"inserted into queue"<<endl;
            
        }

        void dequeue(){
            Node *temp=front;
            if(front==NULL){
                cout<<"Queue is Empty"<<" ";
                return ;
            }
            cout<<temp->data<<"Deleted from the queue"<<endl;
            if(front==rear){
                front=rear=NULL;
            }
            front=front->next;
            delete temp;
        }

        void display(){
            if(front==NULL){
                cout<<"Queue is Empty"<<endl;
                return ;
            }
            Node *temp=front;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};

int main(){
    int choice, val;
    Queue q;
    do {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Value: ";
                cin >> val;
                q.enqueue(val);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } 
    while (choice != 4);

    return 0;
}