#include <stdio.h>

int main() {
    int durationType=3;
    int MembershipFee=0;
    switch(durationType){
        case 1:
        MembershipFee=1500;
        break;
        case 2:
        MembershipFee=4000;
        break;
        case 3:
        MembershipFee=7000;
        break;
        default:
        printf("Invalid fee");
    }
    printf("Membership Fee: ₹%d",MembershipFee);
    return 0;
}