#include <stdio.h>
float areaOfCircle(float r){
    float area;
    area=3.14*r*r;
    return area;
}
int main(){
    float r;
    float result;
    scanf("%f",&r);
    result=areaOfCircle(r);
    printf("%.2f",result);
    return 0;
}