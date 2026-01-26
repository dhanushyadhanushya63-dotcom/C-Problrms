#include <stdio.h>
int main() {
    int year=2025;
    if((year%400==0)||(year%4==0&&year%100!=0)){
        printf("It is leap year");
    }else{
        printf("It is not leap year");
    }
    return 0;
}