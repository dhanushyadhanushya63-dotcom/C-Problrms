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
   int minSum=0;
   int index=1;
   for(int i=0;i<r;i++){
       int sum=0;
       for(int j=0;j<c;j++){
           sum=sum+arr[i][j];
       }
       if(sum!=0 && sum<minSum){
           minSum=sum;
           index=i;
       }
   }
   printf("%d",index);
    return 0;
}