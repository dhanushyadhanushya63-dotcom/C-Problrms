#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   int sum=0;
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   if(n==1){
       printf("0");
   }else{
        int index=-1;
       for(int i=1;i<n-1;i++){
           sum=arr[i-1]+arr[i+1];
           if(sum==arr[i]){
               index=i;
               break;
           }
       }
        printf("%d",index);
   }
    return 0;   
}