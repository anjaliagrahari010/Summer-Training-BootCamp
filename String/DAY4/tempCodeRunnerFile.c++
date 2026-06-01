
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char d;
    cin>>d;
    int n;
    cin>>n;
    int len=s.size();
    n = n % len;
    string newS(len,' ');
    if(d=='L'||d=='l'){
        for(int i=0;i<len;i++){
            newS[i]=s[(i+n)%len];
        }
    }
    else if(d=='R'||d=='r'){
        for(int i=0;i<len;i++){
            newS[(i-n+len)%len]=s[i];
        }
       
    }
     cout<<newS;
    return 0;
}