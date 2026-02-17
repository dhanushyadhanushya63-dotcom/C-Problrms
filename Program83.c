#include <stdio.h>

int main() {
  int accountType=2;
  int years=5;
  int interest=0;
  
  switch(accountType){
      case 1:
      interest=4;
      break;
      case 2:
      if(years<=3)
        interest=5;
      else
        interest=7;
      break;
      default:
      printf("Invalid");
        
  }
  printf("Inetrest %d%%",interest);
  return 0;
}