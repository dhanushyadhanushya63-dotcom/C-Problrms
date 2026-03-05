#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int closet=arr[0];
    int d1,d2;
    for(int i=0;i<n;i++){
        d1=closet;
        if(d1<0){
            d1=-d1;
        }
        d2=arr[i];
        if(d2<0){
            d2=-d2;
        }
        if(d2<d1||(d1==d2&&arr[i]>closet)){
            closet=arr[i];
        }
    }
    printf("%d",closet);
    return 0;
}