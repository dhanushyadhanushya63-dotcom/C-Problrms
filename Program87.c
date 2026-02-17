#include <stdio.h>
int main() {
   int vehicleType=2;
   int trip=5;
   int amount=0;
   
   switch(vehicleType){
     case 1:
     if(trip==1){
         amount=100;
     }else{
         amount=800;
         break;
     }
     case 2:
         amount=trip*240;
         break;
     default:
     printf("Invalid");
     break;
   }
   printf("Amount ₹%d",amount);
    return 0;
}