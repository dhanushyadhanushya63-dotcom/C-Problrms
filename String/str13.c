#include <stdio.h>
int main(){
    char str[100];
    char ch;
    int index=-1;   
    scanf("%s",str);
    scanf(" %c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}