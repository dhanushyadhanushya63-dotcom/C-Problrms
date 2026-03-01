#include <stdio.h>
int main(){
    int n;
    int cash;
    int successful=0;
    int remaining;
    int value=0;
    scanf("%d",&cash);
    scanf("%d",&n);
    remaining=cash;
    while(n>0){
        scanf("%d",&value);
         if(value<=remaining){
             remaining=remaining-value;
             successful++;
         }else{
             break;
         }
         n--;
    }
    printf("Successful Withdrawals:%d\n",successful);
    printf("Remaining Cash:%d",remaining);
    return 0;
}