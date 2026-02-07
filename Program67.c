#include <stdio.h>
int main() {
    char ch='a';
    if(ch>='A'&&ch<='Z'){
        printf("Uppercase letter");
    }else if(ch>='a'&&ch<='z'){
        printf("Lowecase letter");
    }else{
        printf("invalid letter");
    }
    
}