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
class Stack{
        Node *top;
    public:
        Stack(){
            top=NULL;
        }

        void push(int val){
            Node *new_node=new Node(val);
            new_node->next=top;
            top=new_node;
            cout<<val<<" Pushed into stack"<<endl;
        }

        void pop(){
            if(top==NULL){
                cout<<"Stack is Empty"<<endl;
                return ;

            }
            Node *temp=top;
            cout<<top->data<<"popped from stack"<<endl;
            top=top->next;
            delete temp;
        }
        void display(){
            if(top==NULL){
                cout<<"Stack is empty"<<endl;
                return ;
            }
            Node *temp=top;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }; 
        int main(){
            Stack st;
            int choice,val;
            do {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Value: ";
            cin >> val;
            st.push(val);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            st.display();
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
