#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i;
    int *ptr;
    int max;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    max = *ptr;
    for(i = 1; i < n; i++){
        if(*(ptr + i) > max){
            max = *(ptr + i);
        }
    }
    printf("%d", max);
    free(ptr);
    return 0;
}