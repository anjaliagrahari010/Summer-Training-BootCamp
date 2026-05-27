#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==smallest){
           for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
           }
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}