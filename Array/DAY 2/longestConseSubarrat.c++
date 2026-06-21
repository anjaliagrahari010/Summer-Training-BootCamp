#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxLen=1;
    int len=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            len++;
        }
        else{
            len=1;
        }
        if(maxLen<len){
            maxLen=len;
        }
    }
    cout<<maxLen;
    
    return 0;
}