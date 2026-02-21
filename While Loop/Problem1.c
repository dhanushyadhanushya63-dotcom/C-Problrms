#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int i=0;
  int noise=0;
  int violations=0;
  int currentStreak=0;
  int longestStreak=0;
  while(i<n){
      scanf("%d",&noise);
      if(noise>70){
          violations++;
          currentStreak++;
          if(currentStreak>longestStreak){
              longestStreak=currentStreak;
          }
      }else{
              currentStreak=0;
          }
          i++;
      }
      printf("Noise violations:%d\n",violations);
      printf("Longest violations Streak:%d\n",longestStreak);
    return 0;
}