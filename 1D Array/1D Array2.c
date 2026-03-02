#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int marks;
    scanf("%d",&marks);//Enter a number ex 10
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==marks){
            count++;
        }
    }
    printf("X:%d",count);
    return 0;
}