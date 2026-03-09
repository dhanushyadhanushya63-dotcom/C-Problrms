#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int max=0;
    int row=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0&&arr[i][j-1]%2!=0||arr[i][j]%2!=0&&arr[i][j%2==0]){
                count++;
            }
            else{
                break;
            }
        }
        if(count>max){
            max=count;
            row=i;
        }
    }
    printf("%d",row);
    return 0;
}