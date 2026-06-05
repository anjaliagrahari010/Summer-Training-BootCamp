#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
int main(){
    string prefix;
    cin>>prefix;
    stack<int>st;
    for(int i=prefix.size()-1;i>=0;i--){
        char ch=prefix[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int a=st.top();;
            st.pop();
            int b=st.top();
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