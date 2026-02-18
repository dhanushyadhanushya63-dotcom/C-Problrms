#include <stdio.h>
int main() {
   int customerType=2;
   int billAmount=2000;
   int discount;
   int finalBill;
   switch(customerType){
       case 1:
       discount=billAmount*0.05;
       break;
       case 2:
       discount=billAmount*0.15;
       break;
       default:
       printf("Invalid");
   }
   finalBill=billAmount-discount;
   printf("₹%d",finalBill);
    return 0;
}