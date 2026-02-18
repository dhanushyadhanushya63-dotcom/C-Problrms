#include <stdio.h>
int main() {
    int userRole=2;
    int loginTime=20;
    switch(userRole){
        case 1:
        printf("Full access anytime");
        break;
        case 2:
        if(loginTime>=9 && loginTime<=18){
            printf("Limited Access");
        }else{
            printf("Access Denied");
        }
        break;
        default:
        printf("Invalid Access");
    }
    return 0;
}