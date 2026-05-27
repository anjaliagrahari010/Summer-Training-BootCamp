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
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    for(int i=0;i<r;i++){
        int l=0;
        int right=c-1;
        while(l<right){
            int temp=mat[i][l];
            mat[i][l]=mat[i][right];
            mat[i][right]=temp;
            l++;
            right--;
        }
    }


    printf("Rotated Matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}