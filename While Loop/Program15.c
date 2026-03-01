#include <stdio.h>
int main() {
   int n;
   int day=0;
   int values=0;
   int burnout=4;
   int count=0;
   scanf("%d",&n);
   while(n>0){
       scanf("%d",&values);
       day=day+values;
       if(values>burnout){
           count++;
       }
       n--;
   }
   printf("Total Overtime:%d\n",day);
   printf("Burnout Days:%d",count);
    return 0;
}