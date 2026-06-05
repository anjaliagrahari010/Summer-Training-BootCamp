#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int main(){
    string exp;
    cin>>exp;
    stack<int>st;
    for(char ch:exp){
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            switch(ch){
                case '+':st.push(a+b);
                        break;
                case '-':st.push(a-b);
                        break;
                case '*':st.push(a*b);
                        break;
                case '/':st.push(a/b);
                        break;
                case '^':st.push(pow(a,b));
                        break;
            }
        }
    }
    cout<<st.top();
    return 0;
}