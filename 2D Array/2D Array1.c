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
    int max=0;
    int secondMax=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int value=arr[i][j];
            if(value>max){
                secondMax=max;
                max=value;
            }else{
                if(value>secondMax&&value!=max){
                    secondMax=value;
                }
            }
        }
    }
    printf("%d",secondMax);
    return 0;
}