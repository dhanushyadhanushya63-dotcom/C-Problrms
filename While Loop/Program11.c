#include <stdio.h>
int main(){
    int n;
    int count=0;
    int day=0;
    int value=0;
    int threshold=2;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&value);
        day=day+value;
        if(value>threshold){
            count++;
        }
        n--;
    }
    printf("Total Delay:%d\n",day);
    printf("Delayed Days:%d",count);
    return 0;
}