#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int longest=0;
    int count=0;
    int value=0;
    while(n>0){
        scanf("%d",&value);
        if(value==0){
            count++;
            if(count>longest){
                longest=count;
            }
        }
        else{
            count=0;
        }
        n--;
    }
    printf("Longest Default Streak:%d",longest);
    return 0;
}