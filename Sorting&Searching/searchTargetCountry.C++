#include<iostream>
#include<string>
#include<vector>
using namespace std;
int binarySearch(vector<string>&countries, string target){
    int l=0;
    int r=countries.size()-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(countries[mid]==target){
            // cout<<target<<"found at "<<mid;
            return mid;
        }
        else if(countries[mid]<target){
            l=mid+1;;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string>countries(n);
    for(int i=0;i<n;i++){
        getline(cin,countries[i]);
    }
    string target;
    getline(cin,target);
    int index=binarySearch(countries,target);
    if(index==-1){
        cout<<target<<"does not found";
    }
    else{
        cout<<target <<" found at"<< index;
    }
    return 0;

}