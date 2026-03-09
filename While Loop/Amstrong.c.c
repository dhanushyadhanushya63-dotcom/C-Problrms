#include <stdio.h>

int main() {
    int n;
    int digit;
    int temp;
    int count=0;
    int sum=0;
    scanf("%d",&n);
    int temp1=n;
    temp=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    int power=1;
    while(temp!=0){
        digit=temp%10;
        for(int i=1;i<=count;i++){
            power=power*digit;
        }
        sum=sum+power;
        power=1;
        temp=temp/10;
    }
    if(sum==temp1){
        printf("Amstrong");
    }else{
        printf("Not Amstrong");
    }
    return 0;
}