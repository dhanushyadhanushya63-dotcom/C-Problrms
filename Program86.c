#include <stdio.h>
int main() {
   int planType=1;
   float dataUsed=5.0;
   
   switch(planType){
       case 1:
       if(dataUsed<=1)
         printf("Normal Speed");
       else if(dataUsed>1)
         printf("Speed Reduced");
         break;
       case 2:
       if(dataUsed<=2)
         printf("Normal Speed");
       else if(dataUsed>2)
         printf("Extra charges applied");  
         break;
        
   }
    return 0;
}