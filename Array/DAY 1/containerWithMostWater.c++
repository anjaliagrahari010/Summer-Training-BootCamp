#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int maxWater=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int area=w*ht;
            maxWater=max(maxWater,area);
        }
    }
    cout<<maxWater;
    return 0;
}