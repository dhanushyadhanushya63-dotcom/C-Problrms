#include <stdio.h>
int main(){
    int maxCapacity=0;
    int n;
    int treatedcount=0;
    int rejectedcount=0;
    int values=0;
    scanf("%d",&maxCapacity);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&values);
        if(treatedcount<maxCapacity){
            if(treatedcount+values<=maxCapacity){
                treatedcount=treatedcount+values;
            }else{
                rejectedcount=rejectedcount+(treatedcount+values-maxCapacity);
                treatedcount=maxCapacity;
            }
        }else{
            rejectedcount=rejectedcount+values;
        }
        n--;
    }
    printf("Treated Patients:%d\n",treatedcount);
    printf("Rejected Patients:%d",rejectedcount);
}