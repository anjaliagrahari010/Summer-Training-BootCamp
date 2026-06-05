#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans(n);
    stack<int>st;
    st.push(0);
    ans[0]=-1;
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=arr[st.top()];
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    
}