#include <stdio.h>
int main() {
    int vehicleType=3;
    int hours=1;
    int rate=0;
    int parkingfee;
    switch(vehicleType){
        case 1:
        rate=10;
        break;
        case 2:
        rate=20;
        break;
        default:
        rate=20;
        break;
    }
    parkingfee=rate*hours;
    printf("Parkingfee ₹%d",parkingfee);
    return 0;
}