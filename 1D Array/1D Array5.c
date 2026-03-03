#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    int sum2=0;
    int missingValue=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    sum2=n*(n+1)/2;
    missingValue=sum2-sum;
    
    printf("%d",missingValue);
    return 0;
}