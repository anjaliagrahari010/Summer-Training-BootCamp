#include<stdio.h>
int main(){
    int r,c;

    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0;
    for(int j=0;j<c;j++){
        sum+=mat[0][j];
    }
    for(int j=0;j<c;j++){
        sum+=mat[r-1][j];
    }
    for(int i=1;i<r-1;i++){
        sum+=mat[i][0]+mat[i][c-1];
        
    }
    printf("The sum of boundary element is: %d",sum);
    return 0;
}