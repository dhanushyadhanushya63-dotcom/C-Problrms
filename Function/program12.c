#include <stdio.h>
int checkLeap(int year){
    if(year%4==0&&year%100!=0||year%400==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(checkLeap(n)){
        printf("Leap Year");
    }else{
        printf("Not Leap Year");
    }
    return 0;
}