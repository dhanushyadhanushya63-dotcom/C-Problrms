#include <stdio.h>

int main() {
    int hours=3;
    switch(hours){
        case 1:
        printf("Short Interruption");
        break;
        case 2:
        case 3:
        case 4:
        printf("Medium Interruption");
        break;
        default:
        printf("Long Interruption");
    }
    return 0;
}