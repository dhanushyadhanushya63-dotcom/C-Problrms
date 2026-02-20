#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int count=0;
   int prime;
   for(int i=2;i<=n;i++){
       prime=1;
       for(int j=2;j<=i/2;j++){
           if(i%j==0){
               prime=0;
           }
       }
       if(prime==1){
           count++;
       }
   }
   printf("%d",count);
   return 0;
}