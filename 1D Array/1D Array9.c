#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    int a[n];
    int index=0;
    a[index]=max;
    index++;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
        max=arr[i];
        a[index]=max;
        index++;
        } 
    }
    for(int i=index-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}