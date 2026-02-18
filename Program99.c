#include <stdio.h>

int main() {
    int callType = 1;
    int min = 20;
    int callCharge = 0;
    switch(callType){
        case 1:
            callCharge = min * 1;
            break;
        case 2:
            callCharge = min * 3;
            break;
        case 3:
            callCharge = min * 10;
            break;
        default:
            printf("Invalid");
            return 0;
    }
    printf("Call charge ₹%d", callCharge);
    return 0;
}