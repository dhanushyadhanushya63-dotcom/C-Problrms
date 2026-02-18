#include <stdio.h>

int main() {
  int bookType=1;
  int daysLate=10;
  int lateFee=0;
  switch(bookType){
      case 1:
      lateFee=daysLate*2;
      break;
      case 2:
       lateFee=daysLate*5;
      break;
  }
  printf("Late Fee: ₹%d",lateFee);
    return 0;
}