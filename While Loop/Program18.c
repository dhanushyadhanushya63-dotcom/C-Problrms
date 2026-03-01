#include <stdio.h>
int main() {
    int capacity=0;
    int n;
    int value=0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    int safe=0;
    int failure=0;
    while(n>0){
        scanf("%d",&value);
        if(value<=capacity){
            safe++;
        }else{
            failure++;
        }
        n--;
    }
  printf("Safe Hours:%d\n",safe);
  printf("Failure Count:%d",failure);
    return 0;
}