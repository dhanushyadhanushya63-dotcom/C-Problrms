#include <stdio.h>
int main(){
    int n, arr[100];
    int *p, sum = 0;
    scanf("%d", &n);
    if(n > 100){
        printf("Limit exceeded");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    p = arr;
    for(int i = 0; i < n; i++){
        sum += *p;
        p++;
    }
    printf("%d", sum);
    return 0;
}