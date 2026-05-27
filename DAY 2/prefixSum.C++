#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[50];
int prefix[50];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
prefix[0]=0;
for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+arr[i-1];
}
int l,r;
cin>>l>>r;
int sum=prefix[r]-prefix[l-1];
cout<<sum;
return 0;
}
