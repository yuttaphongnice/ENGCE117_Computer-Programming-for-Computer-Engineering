#include <stdio.h>
#include <string.h>

void GetText(char *text) ;

int main(){

    char str[50];

    GetText(str);
    printf("\nstr------|%s\n",str) ;
    return 0 ;
}

void GetText(char *text){
    gets(text);
}