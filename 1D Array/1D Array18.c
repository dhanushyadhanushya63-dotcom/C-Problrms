#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxCount=1;
    int count=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
           count++;
           if(count>maxCount){
               maxCount=count;
           }
        }
        else{
            count=1;
        }
    }
    printf("%d",maxCount);
    return 0;
}