#include <stdio.h>
int main() {
  int courseMode=2;
  char studentCategory='S';
  int amount=0;
  switch(courseMode){
      case 1:
      switch(studentCategory){
          case 'R':
          amount=5000;
          break;
          case 'S':
          amount=3000;
          break;
      }
      break;
      case 2:
      switch(studentCategory){
          case 'R':
          amount=9000;
          break;
          case 'S':
          amount=7000;
          break;
      }
      break;
  }
  printf("₹%d",amount);
  return 0;
}