#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  int count=0;
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
      int Duplicate=0;
      for(int j=0;j<i;j++){
          if(arr[i]==arr[j]){
              Duplicate=1;
              break;
          }
      }
      if(Duplicate==0){
          count++;
      }
  }
  printf("%d",count);
  return 0;
}