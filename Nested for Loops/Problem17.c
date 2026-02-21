#include <stdio.h>
int main() {
    int i;
    int j;
    char ch;
   for(i=1;i<=4;i++){
       for(j=1;j<=4-i;j++){
           printf(" ");
       }
       ch='A';  
       for(j=1;j<=i;j++){
           printf("%c",ch);
           ch++;
       }
       ch-=2;
       for(j=1;j<i;j++){
           printf("%c",ch);
           ch--;
       }
       printf("\n");
   }
    return 0;
}
