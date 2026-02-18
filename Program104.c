#include <stdio.h>

int main() {
  int vehicleType=3;
  int distance=5;
  int fare=0;
  switch(vehicleType){
      case 1:
      fare=distance*10;
      break;
      case 2:
      fare=distance*15;
      break;
      case 3:
      fare=distance*20;
      break;
      default:
      printf("Invalid");
  }
  printf("Fare ₹%d",fare);
return 0;
}