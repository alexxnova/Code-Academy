/*
Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .

*/

#include <stdio.h>


char* my_strncpy(char* s, char* t, int n);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    char str2[100] = {};
    printf("%s", my_strncpy(str, str2,3));
    return 0;
}

char* my_strncpy(char* s, char* t, int n){
    char* p = t;
    while (*s && n--){
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
    return p;
}