#include <stdio.h>
int reverse(int n){
    int rev=0;
    int digit;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}