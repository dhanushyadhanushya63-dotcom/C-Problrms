#include <stdio.h>
int main() {
    int num1=333;
    int num2=25;
    int num3=90;
    if(num1>num2&&num1>num3){
        printf("%d is the largest number",num1);
    }else if(num2>num3){
        printf("%d num2 is the largest number",num2);
    }else{
        printf("%d num3 is the largest number",num3);
    }
    return 0;
}