#include <stdio.h>
int main() {
    int n;
    int rev=0;
    scanf("%d",&n);
    for(;n!=0;n=n/10){
      int rem=n%10;
      rev=rev*10+rem;
    }
    printf("%d\n",rev);
    return 0;
}