#include <stdio.h>
int armstrong(int n){
    int original=n;
    int sum=0;
    int r;
    while(n!=0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==original){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(armstrong(n)){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}