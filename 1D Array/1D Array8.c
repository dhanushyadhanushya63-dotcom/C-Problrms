#include <stdio.h>

int main() {
   int n;
   int k;
   scanf("%d",&n);
   int arr[n];
   scanf("%d",&k);
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(int i=k;i<n;i++){
       printf("%d ",arr[i]);
   }
   for(int i=0;i<k;i++){
       printf("%d ",arr[i]);
   }
    return 0;
}