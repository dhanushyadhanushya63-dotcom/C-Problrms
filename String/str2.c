#include <stdio.h>
int main(){
    char str[100];
    int result=1;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            result=0;
            break;
        }
    }
    if(result==1){
        printf("Invalid");
    }else{
        printf("Valid");
    }
    return 0;
}