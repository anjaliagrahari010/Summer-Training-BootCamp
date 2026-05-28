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
    for(int i = 0; i < r; i++) {

        for(int j = 0; j < c; j++) {

            // Boundary condition
            if(i == 0 || i == r-1 || j == 0 || j == c-1) {

                sum += mat[i][j];
            }
        }
    }
    printf("The sum of boundary element is: %d",sum);
    return 0;
}