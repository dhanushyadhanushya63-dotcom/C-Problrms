#include <stdio.h>

int main() {
 int code=1;
 int experience=5;
 int salary=0;
 switch(code){
     case 1:
     salary=50000;
     break;
     case 2:
     salary=35000;
     break;
     case 3:
     salary=25000;
      break;
      default:
      printf("invalid");
      return 0;
 }
 if(experience>=3)
       salary=salary+(experience*5000);
 printf("Salary ₹%d",salary);
  return 0;
}