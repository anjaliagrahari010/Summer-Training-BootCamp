#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i=i*2){
        for(int j=0;j<c;j++){
            mat[i][j]=mat[i][j] * -1;
        }
    }
   for(int j=0;j<c;j++){
    int top=0;
    int bottom=r-1;
    while(top<bottom){
        int temp=mat[top][j];
        mat[top][j]=mat[bottom][j];
        mat[bottom][j]=temp;
    }
   }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}