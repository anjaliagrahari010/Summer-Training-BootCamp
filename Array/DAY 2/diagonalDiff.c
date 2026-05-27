#include<stdio.h>
#include<math.h>
void main(){
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=mat[i][j];
            }
            if(i+j==n-1){
                sum2+=mat[i][j];
            }
            
        }
    }
    printf("%d",abs(sum1-sum2));
}