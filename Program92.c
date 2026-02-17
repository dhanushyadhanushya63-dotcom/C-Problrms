#include <stdio.h>
int main() {
   int category=2;
   int distance=33;
   
   switch(category){
       case 1:
       if(distance<=30){
           printf("Eligible");
       }else{
           printf("Eligible with extra fee");
       }
       break;
       case 2:
       if(distance<=30){
           printf("Eligible");
       }else{
           printf("Not Eligible");
       }
       break;
       default:
       printf("Invalid");
       
   }
    return 0;
}