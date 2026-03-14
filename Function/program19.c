#include <stdio.h>
int power(int a, int b){
    if(b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}
int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = power(a, b);
    printf("%d", result);
    return 0;
}
