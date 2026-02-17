#include <stdio.h>
int main() {
  int category=2;
  int age=3;
  int amount=0;
  switch(category){
      case 1:
      if(age<=5){
          amount=1500;
      }else{
          amount=2500;
      }
      break;
      case 2:
      if(age<=5){
          amount=4000;
      }else{
          amount=6000;
      }
      break;
  }
  printf("Amount ₹%d",amount);
    return 0;
}