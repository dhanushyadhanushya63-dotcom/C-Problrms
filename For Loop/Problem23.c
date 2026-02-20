#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int prime=1;
  if(n<=1){
      prime=0;
  }
  else{
      for(int i=2;i<=n/2;i++){
          if(n%i==0){
              prime=0;
              break;
          }
      }
}
  if(prime==1){
          printf("Prime");
      }else{
          printf("Not prime");
      }
  return 0;
}
