#include <stdio.h>
int powerOf(int a,int b){
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    return power;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",powerOf(a,b));
    return 0;
}