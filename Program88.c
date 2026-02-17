#include <stdio.h>
int main() {
  int loanType=2;
  int score=680;
  switch(loanType){
      case 1:
      if(score>=700){
          printf("Approved");
      }else if(score>=650 && score<=699){
          printf("Manual Review");
      }
       break;
      case 2:
      if(score>=700){
          printf("Approved");
      }else if(score>=650 && score<=699){
          printf("Manual Review");
      }else{
          printf("Rejected");
      }
      break;
      
  }
    return 0;
}