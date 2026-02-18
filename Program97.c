#include <stdio.h>
int main() {
   int connectionType=2;
   int unit=15;
   int bill=0;
   switch(connectionType){
       case 1:
       if(unit<=30){
           bill=unit*5;
       }else{
          bill=(30*5)+((unit-30)*8);
       }
       break;
       case 2:
       bill=unit*10;
       break;
       default:
       printf("Invalid");
       return 0;
   }
   printf("Bill ₹%d",bill);
    return 0;
}