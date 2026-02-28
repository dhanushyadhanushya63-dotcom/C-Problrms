#include <stdio.h>
int main() {
    int fuel=0;
    int n;
    int count=0;
    int value=0;
    scanf("%d",&fuel);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&value);
        if(fuel>=value){
            fuel=fuel-value;
            count++;
        }else{
            break;
        }
        n--;
    }
    printf("Complete Trips:%d\n",count);
    printf("Remaining fuel:%d",fuel);
    return 0;
}