#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void mergeElement(queue<int>q,int n){
    queue<int>q1;
    for(int i=0;i<n/2;i++){
        q1.push(q.front());
        q.pop();
    }
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
        cout<<q.front()<<" ";
        q.pop();
    }
    
}
int main(){
    int n;
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    mergeElement(q,n);
    return 0;
}