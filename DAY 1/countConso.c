#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char str[100];
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]!='a' || str[i]!='A' || str[i]!='e' || str[i]!='E' || str[i]!='o' || str[i]!='O' || str[i]!='i' || str[i]!='I' || str[i]!='u' || str[i]!='U'){
            count++;
        }

    }
    printf("%d",count);
    return 0;
}