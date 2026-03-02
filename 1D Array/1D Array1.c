#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int secondLargest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else{
            if(arr[i]<largest && arr[i]>secondLargest){
                secondLargest=arr[i];
            }
        }
    }
    printf("Second Largest:%d",secondLargest);
    return 0;
}