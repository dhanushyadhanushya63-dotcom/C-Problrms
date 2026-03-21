#include <stdio.h>
int main(){
    int n, arr[100], x;
    int *p, pos = -1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    p = arr;
    for(int i = 0; i < n; i++){
        if(*p == x){
            pos = i + 1;
            break;
        }
        p++;
    }
    printf("%d", pos);
    return 0;
}