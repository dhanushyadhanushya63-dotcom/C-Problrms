#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int marks[n];
    int count=0;
    int sum=0;
    float avg;
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+marks[i];
    }
    avg=(float)sum/n;
    for(int i=0;i<n;i++){
        if(marks[i]>avg){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}