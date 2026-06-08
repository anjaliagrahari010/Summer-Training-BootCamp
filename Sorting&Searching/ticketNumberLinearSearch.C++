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
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Congratulation! Ticker Number "<<target<<"Found at"<<i<<"!";
            return 0;
        }
    }
    cout<<"Better Luck next time!.";
    return 0;

}