#include <stdio.h>

int main() {
    int planType=3;
    int speed=0;
    switch(planType){
        case 1:
        speed=40;
        break;
        case 2:
        speed=100;
        break;
        case 3:
        speed=300;
        break;
    }
    printf("Spped %d Mbps",speed);
    return 0;
}