#include <stdio.h>
int sumOfDigit(int n){
    int sum=0;
    int digit;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    int result;
    scanf("%d",&n);
    result=sumOfDigit(n);
    printf("%d",result);
    return 0;
}