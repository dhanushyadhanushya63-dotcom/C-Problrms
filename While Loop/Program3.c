#include <stdio.h>
int main() {
    int total;
    int n;
    int data,count=0,value=0;
    scanf("%d",&total);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&data);
        total=total-data;
        if(total>=0){
            count++;
            value=total;
        }
        n--;
    }
    printf("Days Used:%d\n",count);
    printf("Remaining Data:%dGB",value);
    return 0;
}