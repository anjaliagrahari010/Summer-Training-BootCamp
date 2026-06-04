#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.size()==0){
                return false;
            }
            if((s[i]==')'&&st.top()=='(')||(s[i]=='}'&&st.top()=='{')||(s[i]==']'&&st.top()=='[')){
                st.pop();

            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    getline(cin,s);
    if(isValid(s)){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}