#include <stdio.h>
int main() {
 int m;
 int n;
 scanf("%d%d",&m,&n);
 int sum=0;
 for(int i=m;i<=n;i+=m){
     sum=sum+i;
 }
 printf("sum of a number:%d",sum);
 return 0;
}