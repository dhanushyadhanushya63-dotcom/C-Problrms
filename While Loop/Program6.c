#include <stdio.h>
int main() {
    int n;
    int sum=0;
    int value;
    int maxWeight=0;
    int count=0;
    scanf("%d",&maxWeight);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&value);
        sum=sum+value;
        if(sum<maxWeight){
            count++;
        }
        n--;
    }
    printf("Passangers Allowed:%d\n",count);
    if(sum>maxWeight){
        printf("Overload:yes");
    }else{
        printf("Overload:No");
    }
    return 0;
}