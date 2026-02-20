#include <stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int sum=0;
 for(;n!=0;n=n/10){
     int rem=n%10;
     sum=sum+rem;
 }
 printf("Sum of Digits:%d",sum);
 return 0;
}