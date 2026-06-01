// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int n;
//     cin>>n;
//     int len=s.size();
//     char d;
//     cin>>d;
//     string ans="";
//     if(d=='L'||d=='l'){
//         ans=s.substr(n)+s.substr(0,n);
//     }
//     else{
//         ans=s.substr(len-n)+s.substr(0,len-n);
//     }
//     for(int i=0;i<n;i++){
//         if(isupper(ans[i])){
//             ans[i]=tolower(ans[i]);
//         }
//         if(islower(ans[i])){
//             ans[i]=toupper(ans[i]);
//         }
//     }
//     cout<<ans;

// }


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