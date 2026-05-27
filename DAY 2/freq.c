#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int k=n/4;
   for(int i=0;i<100;i++){
    if(freq[i]>k){
        printf("%d",i);
        break;
    }
    
   }
   return 0;
}