#include <stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int count=0;
 for(;n!=0;n=n/10){
    int rem=n%10;
    if(rem%2==0){
        count++;
    }
 }
 if(count==0){
     count=1;
 }
 printf("Even digit:%d",count);
 return 0;
}