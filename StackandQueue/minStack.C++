#include<iostream>
#include<stack>
using namespace std;
class MinStack {
public:
    stack<long long int>st;
    long long int minVal;

    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            minVal=value;
        }
        else{
            if(value<minVal){
                st.push((long long int) 2*value -minVal);
                minVal=value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(st.top()<minVal){
            minVal=2*minVal-st.top();
           
        }
         st.pop();
    }
    
    int top() {
        if(st.top()<minVal){
            return minVal;
        }
        else{
           return st.top();
        }
    }
    
    int getMin() {
        return minVal;
    }
};
int main() {
    MinStack ms;

    int q;
    cout << "Enter number of operations: ";
    cin >> q;

    while (q--) {
        int choice;
        cout << "\n1. Push\n2. Pop\n3. Top\n4. Get Min\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int x;
                cout << "Enter value: ";
                cin >> x;
                ms.push(x);
                break;
            }

            case 2: {
                if (!ms.st.empty()) {
                    ms.pop();
                    cout << "Element popped\n";
                } else {
                    cout << "Stack is empty\n";
                }
                break;
            }

            case 3: {
                if (!ms.st.empty()) {
                    cout << "Top Element: " << ms.top() << endl;
                } else {
                    cout << "Stack is empty\n";
                }
                break;
            }

            case 4: {
                if (!ms.st.empty()) {
                    cout << "Minimum Element: " << ms.getMin() << endl;
                } else {
                    cout << "Stack is empty\n";
                }
                break;
            }

            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}