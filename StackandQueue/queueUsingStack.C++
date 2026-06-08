#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int>s1,s2;
public:
    Queue(){

    }
    void enqueue(int x){
        s1.push(x);
    }
    void dequeue(){
        if(s1.empty() && s2.empty()){
            cout<<"Underflow"<<endl;
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout<<"Deleted: "<<s2.top()<<endl;
        s2.pop();
    }
    void front(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return ;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout<<"Front: "<<s2.top()<<endl;
    }
    bool isEmpty(){
        return s1.empty() && s2.empty();
    }
};
int main(){
    
    Queue q;
    int choice,val;
    do{
        cout << "\n1. Enqueue\n2. Dequeue\n3. Front\n4. Exit\n";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter value: ";
                cin >> val;
                q.enqueue(val);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.front();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }
    }
    while (choice != 4);
}
