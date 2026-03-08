#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxSum=0;
    int index=0;
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum=sum+arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            index=j;
        }
    }
    printf("%d",index);
    return 0;
}