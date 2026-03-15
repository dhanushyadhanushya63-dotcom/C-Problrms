#include <stdio.h>
int main(){
    char str[100];
    char *str1;
    int count=0;
    fgets(str,100,stdin);
    str1=str;
    while(*str1!='\0'){
        if(*str1=='a'||*str1=='e'||*str1=='i'||*str1=='o'||*str1=='u'||*str1=='A'||*str1=='E'||*str1=='I'||*str1=='O'||*str1=='U'){
            count++;
        }
        str1++;
    }
    printf("%d",count);
    return 0;
}