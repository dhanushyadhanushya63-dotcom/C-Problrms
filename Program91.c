#include <stdio.h>
int main() {
    int flightClass=1;
    int extraWeight=5;
    int charge=0;
    switch(flightClass){
        case 1:
        charge=extraWeight*300;
        printf("Extra baggage weight ₹%d",charge);
        break;
        case 2:
        if(extraWeight<3){
            printf("Free");
        }else{
            charge=(extraWeight-3)*500;
            printf("Extra baggage weight ₹%d",charge);
        }
        break;
        default:
        printf("Invalid");
    }
    return 0;
}