#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char>st;
    int choice;
    char ch;
    do{
        cin>>choice;
        switch(choice){
            case 1:cin>>ch;
                    st.push(ch);
                    cout<<"Adding Sequence: "<<st.top();
                    cout<<endl;
                    break;
            case 2: if(st.empty()){
                        cout<<"Stack is Empty";
                        }
                 else{
                        cout<<"Removing Sequence: "<<st.top();
                        st.pop();
                }
                        cout<<endl;
                         break;

            case 3: if(st.empty()){
                    cout<<"Stack is Empty";
                }
                else{
                        stack<char> temp = st;
                        cout<<"Stack Elements are: ";
                        while(!temp.empty()){
                        cout<<temp.top()<<" ";
                        temp.pop();
                        }
                }
                cout<<endl;
                break;
            case 4: cout<<"Exiting Program";
                    break;
            default: cout<<"Invalid Choice";
        }
        
    }
    while(choice!=4);
    return 0;

}