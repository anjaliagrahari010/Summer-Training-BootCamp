#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string postfix;
    cin>>postfix;
    stack<string>st;
    for(char ch:postfix){
        if(isalnum(ch)){
            st.push(string(1,ch));
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();

            string temp=ch+op2+op1;
            st.push(temp);
        }
    }
    cout<<st.top();
    return 0;
}