#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        char ch=str[i];
        int count =0;
        while(i<n && str[i]==ch){
            count++;
            i++;
        }
        printf("%c",ch);
        if(count>1){
            printf("%d",count);
        }
    }
    return 0;
}