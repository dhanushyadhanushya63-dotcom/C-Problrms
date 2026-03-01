#include <stdio.h>
int main() {
   int n;
   int maxWeight=0;
   int values=0;
   int count=0;
   int sum=0;
   scanf("%d",&maxWeight);
   scanf("%d",&n);
   while(n>0){
       scanf("%d",&values);
       sum=sum+values;
       if(sum<maxWeight){
           count++;
       }
       n--;
   }
   printf("People Entered:%d\n",count);
   if(sum>maxWeight){
       printf("Overload Status:Yes");
   }else{
       printf("Overload Status:No");
   }
    return 0;
}