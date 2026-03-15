#include <stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap:%d %d\n",a,b);
    swap(&a,&b);
    printf("After swap:%d %d\n",a,b);
    return 0;
}