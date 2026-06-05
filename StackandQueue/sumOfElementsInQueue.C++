#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int val;
    queue<int>q;
    for(int i=0;i<n;i++){
        cin>>val;
        q.push(val);
        sum+=q.front();
        q.pop();
    }
    cout<<sum;
    return 0;
}