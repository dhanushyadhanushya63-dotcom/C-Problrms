#include <stdio.h>
float simpleIntrest(int p,int r,int t){
    float SI;
    SI=(p*r*t)/100.0;
    return SI;
}
int main(){
    int p,r,t;
    float result;
    scanf("%d %d %d",&p,&r,&t);
    result=simpleIntrest(p,r,t);
    printf("%.2f",result);
    return 0;
}