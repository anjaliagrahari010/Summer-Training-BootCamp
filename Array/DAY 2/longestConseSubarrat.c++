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
    int k=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            len++;
        }
        else{
            len=1;
        }
        if(len>maxLen){
            maxLen=len;
            k=i;
        }
    }
    vector<int>result;
    for(int i=k-maxLen+1;i<=k;i++){
        cout<<arr[i]<<" ";
    }
}