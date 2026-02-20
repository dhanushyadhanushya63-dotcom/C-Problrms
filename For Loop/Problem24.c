#include <stdio.h>

int main() {
  int n;
  int original;
  scanf("%d",&n);
  original=n;
  int rev=0;
  for(;n!=0;n=n/10){
      int rem=n%10;
      rev=rev*10+rem;
  }
  if(original==rev){
      printf("Palindrome");
  }else{
      printf("Not Palindrome");
  }
  return 0;
}
