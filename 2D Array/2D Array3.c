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
    int maxUnique=0;
    int department=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            int unique=1;
            for(int k=0;k<j;k++){
                if(arr[i][j]==arr[i][k]){
                    unique=0;
                    break;
                }
            }
            if(unique==1){
                count++;
            }
        }
        if(count>maxUnique){
             maxUnique=count;
             department=1;
        }
    }
    printf("%d",department);
    return 0;
}