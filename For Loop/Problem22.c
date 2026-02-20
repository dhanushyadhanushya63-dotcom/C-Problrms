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
              break;
          }
      }
      if(prime==1){
          count++;
      }
  }
  printf("Print the count of prime numbers:%d",count);
  return 0;
}
