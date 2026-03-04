#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int result=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d",arr[i],arr[j]);
                result=1;
                break;
            }
        }
        if(result==1){
            break;
        }
    }
    if(result==0){
        printf("No Pair");
        }
    return 0;
}