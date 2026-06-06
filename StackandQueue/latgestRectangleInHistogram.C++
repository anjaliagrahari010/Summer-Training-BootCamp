#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>right(n);
        vector<int>left(n);
        stack<int>st;
        // right smaller nearest bar
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;
            }
            else{
                right[i]=st.top();
            }
            st.push(i);
        }
         while(!st.empty()){
            st.pop();
        }
        // left smaller nearest bar
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=-1;
            }
            else{
                left[i]=st.top();
            }
            st.push(i);
        }
        // while(!st.empty()){
        //     st.pop();
        // }
        // Largest Rectanle
        int ans=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int currArea=heights[i] * width;
            ans=max(ans,currArea);
        }
        return ans;
    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int>heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    cout<<s.largestRectangleArea(heights);
    return 0;

}

