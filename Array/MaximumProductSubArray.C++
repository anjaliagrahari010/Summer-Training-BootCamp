#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currMax=arr[0];
    int currMin=arr[0];
    int maxProd=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(currMax,currMin);
        }
        currMax=max(currMax*arr[i],arr[i]);
        currMin=min(currMin*arr[i],arr[i]);
        maxProd=max(currMax,maxProd);
    }
    cout<<maxProd;
    return 0;
}