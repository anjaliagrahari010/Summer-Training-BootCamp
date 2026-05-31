#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=0;
    int r=s.size()-1;
    while(l<r){
        // while(l<r && !isalnum(s[l])){
        //     l++;
        // }
        // while(l<r && !isalnum(s[r])){
        //     r--;
        // }
        if(s[l]!=s[r]){
            cout<<"String is not pallindrome";
            return 0;
        }
        l++;
        r--;
    }
    cout<<"String is pallindrome";
    return 0;
    
}