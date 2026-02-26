#include <stdio.h>
int main() {
  int n;
  int initialBalance;
  int amt;
  int count=0;
  scanf("%d",&n);
  scanf("%d",&initialBalance);
  while(n>0){
      scanf("%d",&amt);
      initialBalance=initialBalance+amt;
      if(initialBalance<2000&&n>1){
          count++;
      }
      n--;
  }
  printf("Final Balance:%d",initialBalance);
  printf("Low Balance:%d",count);
    return 0;
}