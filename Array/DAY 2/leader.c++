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
    vector<int>result;
    
    int leader=arr[n-1];
    result.push_back(leader);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
            result.push_back(leader);
        }
    }
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i]<<" ";

    }
    return 0;
}