#include <stdio.h>
int main(){
    int n;
    int count=0;
    int value;
    int usage=5;
    int max=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&value);
        if(value>max){
            max=value;
        }
            if(value>usage){
                count++;
            }
        n--;
    }
    printf("Max Usage:%d\n",max);
    printf("Surge Hours:%d",count);
    return 0;
}