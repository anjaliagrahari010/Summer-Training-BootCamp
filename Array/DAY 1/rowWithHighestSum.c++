#include<iostream>
#include<vector>
#include<climits>
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
    int maxSum=INT_MIN;
    int maxRow;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=mat[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxRow=i;
        }
    }
    for(int i=0;i<r;i++){
        if(i==maxRow){
            continue;
        }
        for(int j=0;j<c;j++){

       
       cout<<mat[i][j]<<" ";

       
    }
    cout<<endl;
     }
    return 0;
}
