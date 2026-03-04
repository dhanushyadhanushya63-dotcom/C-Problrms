#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=1000;
    for(int i=0;i<n;i++){
        if(arr[i]>0&&arr[i]<min){
            min=arr[i];
        }
    }
    if(min==1000){
        printf("No Positive");
    }else{
        printf("%d",min);
    }
  return 0;
}