#include <stdio.h>
int main() {
    int attemptNumber=3;
    int marksObtained=30;
    switch(attemptNumber){
        case 1:
        if(marksObtained>=80){
            printf("Excellent");
        }else{
            printf("Not Qualified");
        }
        break;
        case 2:
        if(marksObtained>=60){
            printf("Good");
        }else{
            printf("Not Qualified");
        }
        break;
        case 3:
        printf("Needs Improvement");
        break;
        default:
        printf("Invalid");
        break;
    }
        

    return 0;
}