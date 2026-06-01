#include<stdio.h>
#include<string.h>
int main(){
    char str[100][100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    char prefix[100];
    strcpy(prefix,str[0]);
    for(int i=0;i<n;i++){
        int j=0;
        while(prefix[j] && str[i][j] && prefix[j] == str[i][j]){
            j++;
        }
        prefix[j]='\0';
        if(strlen(prefix)==0){
            break;
        }
    }
    printf("%s",prefix);
    return 0;
}
