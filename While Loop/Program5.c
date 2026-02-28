#include <stdio.h>
int main() {
    int n;
    int value=0;
    int success=0;
    int failure=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&value);
        if(value==1){
            success++;
        }else{
            failure++;
        }
        n--;
    }
    printf("Successfull: %d\n",success);
    printf("Canceled: %d\n",failure);
    
    if(success>failure || success==failure){
        printf("Status: Safe");
    }else {
        printf("Status: Risk");
    }
    
  