#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int sum=0;
   for(int i=1;i<n;i++){
       if(n%i==0){
           sum=sum+i;
       }
   }
       if(sum==n){
           printf("It is a Perfect  Number");
       }else{
           printf("It is not a Perfect Number");
       }
   
   return 0;
}