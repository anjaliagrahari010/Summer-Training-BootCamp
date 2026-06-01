#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int freq[256]={0};
    for(char ch:s){
        if(freq[ch]==0){
            cout<<ch;
            freq[ch]=1;
        }
    }
    return 0;

}