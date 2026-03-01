#include <stdio.h>
int main(){
    int n;
    int totalData=0;
    int values=0;
    int count=0;
    int exhausted=0;
    scanf("%d",&totalData);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&values);
        totalData=totalData-values;
        count++;
        if(totalData<=0){
            printf("Exhaused Day:%d\n",count);
            printf("Overused Data:%d\n",-totalData);
            exhausted=1;
            break;
        }
        n--;
    }
    if(exhausted==0){
    printf("Exhausted Day:Not Exhausted\n");
    printf("Overused Data:0\n");
    }
    return 0;
}