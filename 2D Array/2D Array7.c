#include <stdio.h>
int main(){
    int r,c;
    int count=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int min=1;
            int max=1;
            for(int k=0;k<c;k++){
                if(arr[i][j]>arr[i][k]){
                    min=0;
                }
            }
            for(int k=0;k<r;k++){
                if(arr[i][j]<arr[k][j]){
                    max=0;
                }
            }
            if(min==1&&max==1){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}