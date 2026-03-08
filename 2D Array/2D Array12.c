#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int num=0;
    int max;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int count=0;
            for(int k=0;k<r;k++){
                for(int l=0;l<c;l++){
                    if(arr[i][j]==arr[k][l]){
                        count++;
                    }
                }
            }
            if(count>max){
                max=count;
                num=arr[i][j];
            }
        }
    }
    printf("%d",num);
    return 0;
}