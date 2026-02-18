#include <stdio.h>

int main() {
  int roomType=3;
  int HostelFee=0;
  switch(roomType){
      case 1:
      HostelFee=80000;
      break;
      case 2:
      HostelFee=60000;
      break;
      case 3:
      HostelFee=45000;
      break;
      default:
      printf("Invalid");
  }
     printf("HostelFee :₹%d",HostelFee);
    return 0;
}