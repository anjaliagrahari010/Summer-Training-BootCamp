#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int freq[256]={0};
    for(char ch:s){
        freq[ch]++;
    }
    for(char ch:s){
        if(freq[ch]==1){
            cout<<ch;
            return 0;
        }
    }
    cout<<"No such character found.";
    return 0;

}
