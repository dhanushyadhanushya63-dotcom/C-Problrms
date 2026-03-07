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
    int min=0;
    int max=0;
    int result=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<0){
                if(result){
                    min=arr[i][j];
                    max=arr[i][j];
                    result=0;
                }
                if(arr[i][j]<min){
                    min=arr[i][j];
                }
                if(arr[i][j]>max){
                    max=arr[i][j];
                }
            }
        }
    }
    printf("%d",min*max);
    return 0;
}