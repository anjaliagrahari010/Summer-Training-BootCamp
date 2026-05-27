#include<stdio.h>
int main(){
    int largest;
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element in the array is %d: ",largest);
    return 0;
}