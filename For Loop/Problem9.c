#include <stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int count=0;
 for(;n!=0;n=n/10){
    count++;
 }
 if(count==0){
     count=1;
 }
 printf("%d",count);
    return 0;
}