#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    vector<vector<int>>mat(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    int top=0,bottom=r-1;
    int left=0,right=c-1;
    vector<int>result;
    while(left<=right && top<=bottom){
        //Top Row
        for(int i=left;i<=right;i++){
            result.push_back(mat[top][i]);
        }
        top++;
        //Right Column
        for(int i=top;i<=bottom;i++){
            result.push_back(mat[i][right]);
        }
        right--;
        //bottom row
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                result.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        //left column
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                result.push_back(mat[i][left]);
            }
            left++;
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
 return 0;   
}