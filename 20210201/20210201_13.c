/*
напишете функцията void lower(char s[]), която
преобразува главните букви в малки.

*/

#include <stdio.h>
#include <string.h>
#include "str.h"

void lower(char s[]);

int main(){
    char str[]="ABCD";
    lower(str);
    return 0;
}

void lower(char s[]){
    int i=0; 
    while(s[i]!='\0'){
        if (s[i] >='A' && s[i] <='Z'){
            s[i] = s[i]+32;
            i++;
        }
    }
    printstr(s);
}
