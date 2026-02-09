#include <stdio.h>

int main() {
    int units=120;
    double bill=0;
    if(units<=50){
        bill=units*4;
    }else if(units<=100){
        bill=(50*4)+(units-50)*5;
    }else{
        bill=(50*4)+(50*5)+(units-100)*7.5;
    }
    printf("Bill amount =%.0f",bill);

    return 0;
}