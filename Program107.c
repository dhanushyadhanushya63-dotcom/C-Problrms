#include <stdio.h>

int main() {
  int violationType=3;
  int Fine=0;
  switch(violationType){
      case 1:
      Fine=1000;
      break;
      case 2:
      Fine=1500;
      break;
      case 3:
      Fine=2000;
      break;
  }
  printf("Fine ₹%d",Fine);
    return 0;
}