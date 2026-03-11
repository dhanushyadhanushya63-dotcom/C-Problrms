#include <stdio.h>
int main(){
    char str[100];
    int count=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    for(int i=count-1;i>=0;i--){
        printf("%c",str[i]);
    }
}