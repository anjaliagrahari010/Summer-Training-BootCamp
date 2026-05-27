#include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int beg=0;
        int end=c-1;
        while(beg<end){
            int temp=mat[i][beg];
            mat[i][beg]=mat[i][end];
            mat[i][end]=temp;
            beg++;
            end--;
        }
    }
    printf("Reversed Matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}