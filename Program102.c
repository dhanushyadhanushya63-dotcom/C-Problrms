#include <stdio.h>

int main() {
  int deliveryMode=3;
  int charge=0;
  switch(deliveryMode){
      case 1:
      charge=40;
      break;
      case 2:
      charge=120;
      break;
      case 3:
      charge=0;
      break;
  }
  printf("₹%d",charge);
    return 0;
}