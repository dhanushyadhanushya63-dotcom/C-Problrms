#include <stdio.h>

int main() {
    int delayDays=7;
    int fine;
    int limit;
    if(delayDays<=5){
        limit=1;
    }else if(delayDays<=10){
        limit=2;
    }else{
        limit=3;
    }
    switch(limit){
        case 1:
        fine=delayDays*50;
        break;
        case 2:
        fine=delayDays*100;
        break;
        case 3:
        fine=delayDays*200;
        break;
    }
    
    printf("Fine ₹%d",fine);
    return 0;
}