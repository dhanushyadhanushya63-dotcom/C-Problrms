#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int result=1;
        for(int j=0;j<c;j++){
            int n=arr[i][j];
            for(int k=2;k<n;k++){
                if(n%2==0){
                    result=0;
                    break;
                }
            }
        }
         if(result==1){
                count++;
            }
    }
    printf("%d",count);
    return 0;
}