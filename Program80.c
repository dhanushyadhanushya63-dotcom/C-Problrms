#include <stdio.h>

int main() {
   int planType=1;
   int paymentMode=11;
   int pay=0;
   switch(planType){
       case 1:
       pay=199;
       break;
       case 2:
       pay=399;
       break;
   }
   
    switch(paymentMode){
       case 11:
       case 12:
       pay=pay-20;
       break;
       case 13:
       break;
       default:
       printf("invalid pay");
       
   }
   printf("pay ₹%d",pay);
   return 0;
}