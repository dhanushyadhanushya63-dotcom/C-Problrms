#include <stdio.h>
int main() {
  int n;
  int balance=0;
  int count=0;
  int cash;
  scanf("%d",&balance);
  scanf("%d",&n);
  while(n>0){
      scanf("%d",&cash);
      if(cash<=balance){
          balance=balance-cash;
          count++;
      }else{
          break;
      }
      n--;
  }
   printf("Succfull purchases:%d\n",count);
   printf("Final Balance:%d",balance);
    return 0;
}