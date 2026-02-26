#include <stdio.h>
int main() {
    int n;
    int count=0;
    int max=0;
    int value=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&value);
        if(value==0){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
        n--;
    }
    printf("Longest Failure Streak:%d",max);
    return 0;
}