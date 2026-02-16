#include<stdio.h>
int main(){
    int marks=82;
    int attendance=80;
    
    if(attendance<75){
        printf("Fail");
    }else if(attendance>=75){
        printf("Distinction");
    }else if(attendance==50&&attendance==74){
        printf("Pass");
    }else{
        printf("fail");
    }
}