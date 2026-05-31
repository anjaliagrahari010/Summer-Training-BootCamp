#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int freq[256]={0};
    if(s1.size()!=s2.size()){
        cout<<"Strings are not anagram";
        return 0;
    }
    for(char ch:s1){
        freq[ch]++;
    }
    for(char ch:s2){
        freq[ch]--;
    }
    
    for(int count:freq){
        if(count!=0){
            cout<<"Strings are not anagram";
            return 0;
        }
    }
    cout<<"Strings are anagram";

}