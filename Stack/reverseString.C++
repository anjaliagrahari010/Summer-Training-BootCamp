#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<char>st;
void reverseString(string s){
        for(char ch:s){
            if(ch!=' '){
                st.push(ch);
            }
            else{
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout<<" ";
                
            }
        }
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            
        
    }



int main(){
    string s;
    getline(cin,s);
    reverseString(s);
    return 0;

}