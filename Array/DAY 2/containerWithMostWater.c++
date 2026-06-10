#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>ht, int n){
    int l=0;
    int r=n-1;
    int currWater;
    int maxWater=0;
    while(l<r){
        int width=r-l;
        int h=min(ht[l],ht[r]);
        currWater=width*h;
        maxWater=max(maxWater,currWater);
        if(ht[l]<ht[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return maxWater;
}
int main(){
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int res=maxArea(height,n);
    cout<<res;
    return 0;
}