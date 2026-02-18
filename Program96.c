#include <stdio.h>
int main() {
    int seatType=1;
    int showTime=10;
    int price=0;
    switch(seatType){
        case 1:
        price=150;
        break;
        case 2:
        price=250;
        break;
        default:
        printf("Invalid");
        break;
        return 0;
    }
    if(showTime>=18){
        price=price+50;
    }
    printf("Price ₹%d",price);
    return 0;
}