#include <stdio.h>
int main() {
    int classType=1;
    int age=65;
    float fare;
    
    switch(classType){
        case 1:
        fare=300;
        if(age<12)
            fare=fare-(fare*50/100);
        else if(age>=60)
            fare=fare-(fare*33/100);
        printf("fare ₹%.0f",fare);
        break;
        
        case 2:
        fare=1000;
        if(age<12)
            fare=fare-(fare*50/100);
            printf("fare ₹%.0f",fare);
        break;
        }
        return 0;
    
   }

   
