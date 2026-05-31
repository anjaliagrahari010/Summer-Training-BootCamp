#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int top=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i] == '['){
            s[++top]=s[i];
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(top==-1){
                cout<<"Invalid";
                return 0;
            }
            if((s[i]==')' && s[top]!='(')||
                (s[i]=='}' && s[top]!='{')||
                (s[i]==']' && s[top]!='[')){
                    cout<<"Invalid";
                    return 0;
                }
                top--;
        }
        
    }
     if(top == -1)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
    
}