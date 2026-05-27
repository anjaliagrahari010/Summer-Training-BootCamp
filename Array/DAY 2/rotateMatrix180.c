#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<c;j++){
        int top=0;
        int bottom=r-1;
        while(top<bottom){
            int temp=arr[top][j];
            arr[top][j]=arr[bottom][j];
            arr[bottom][j]=temp;
            top++;
            bottom--;
        }
    }
    for(int i=0;i<r;i++){
        int left=0;
        int right=c-1;
        while(left<right){
            int temp=arr[i][left];
            arr[i][left]=arr[i][right];
            arr[i][right]=temp;
            left++;
            right--;

        }
    }
    printf("Rotated Matrix by 180 degree: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}