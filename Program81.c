#include<stdio.h>
int main(){
    int order=600;
    int speedType=2;
    int delivery=0;
    switch(speedType){
        case 1:
        delivery=50;
        break;
        case 2:
        if(order<1000)
          delivery=100;
        else
           delivery=0;
          break;
        default:
        printf("invalid");
        break;
    }
    printf("Delivery ₹%d",delivery);
    return 0;
}