#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Stack{
    queue<int>q1,q2;
    public:
        Stack(){
        }
        void push(int x){
            q2.push(x);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1,q2);
        }
        void pop(){
            if(q1.empty() && q2.empty()){
                cout<<"Underflow"<<endl;
                return;
            }
            cout<<"Popped: "<<q1.front()<<endl;
            q1.pop();
        }
        void top(){
            if(q1.empty()){
                cout<<"Stack is empty"<<endl;
                return;
            }
            cout<<"Top element: "<<q1.front();
        }
        bool isempty(){
            return q1.empty();
        }
};
int main(){
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Top\n4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.top();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }
    } while (choice != 4);

    return 0;
}