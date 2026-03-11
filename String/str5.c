#include <stdio.h>
int main() {
    char str[100];
    int count=0;
    int result=1;
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count/2;i++){
        if(str[i]!=str[count-i-1]){
            result=0;
            break;
        }
    }
    if(result==1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}