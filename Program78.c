#include <stdio.h>
int main() {
   int accountType=2;
   int balance=1000;
   int withdrawAmount=3000;
   
   switch (accountType){
       case 1:
       if(balance>=withdrawAmount){
           printf("withdrawal Succesfull");
       }else{
           printf("withdrawal inSuccesfull");
       }
       break;
       
       case 2:
       if(withdrawAmount>5000){
           printf("limited");
        }else{
           printf("withdrawal inSuccesfull");
       }
       break;
       
       
       default:
       printf("insufficient");
       }
        return 0;
   }

   
