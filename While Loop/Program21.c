#include <stdio.h>
int main(){
    int n;
    int min=0;
    int longest=0;
    int max=0;
    int congestionMin=0;
    int values=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&values);
        if(values>20){
            congestionMin++;
            max++;
            if(max>longest){
                longest=max;
            }
        }
        else{
           max=0;
        }
        n--;
    }
    printf("Congestoin Minutes:%d\n",congestionMin);
    printf("Longest Congestion Streak:%d",longest);
   return 0;
}