#include <stdio.h>

int main() {
  int category=2;
  int amt=0;
  switch(category){
      case 1:
      amt=1200;
      break;
      case 2:
      amt=800;
      break;
      case 3:
      amt=500;
      break;
      default:
      printf("Invalid");
      break;
  }
  printf("₹%d",amt);
  return 0;
}