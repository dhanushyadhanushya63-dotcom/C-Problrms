#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    int value=0;
    int threshold=3;
    while(n>0){
        scanf("%d",&value);
        if(value==0){
            count++;
        }
        n--;
    }
    printf("Inactive Weeks:%d\n",count);
    if(count>=threshold){
        printf("Risk Status:High");
    }else{
        printf("Risk Status:Low");
    }
    return 0;
}