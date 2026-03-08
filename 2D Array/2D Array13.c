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
       for(int j=0;j<c/2;j++){
           if(arr[i][j]!=arr[i][c-1-j]){
               result=0;
           }
       }
       if(result==1){
           count++;
       }
   }
   printf("%d",count);
    return 0;
}