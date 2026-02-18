#include <stdio.h>

int main() {
    int fuelType=3;
    int litres=10;
    int fuelCost=0;
    switch(fuelType){
        case 1:
        fuelCost=1050;
        break;
        case 2:
        fuelCost=460;
        break;
        case 3:
        fuelCost=680;
        break;
    }
    printf("Fuel Cost: ₹%d",fuelCost);
    return 0;
}