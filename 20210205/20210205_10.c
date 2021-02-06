/*
Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strncat(char* s, char* t, int n);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    char str2[] = {'A','g','a','i','n','\0'};
    printf("%s", my_strncat(str, str2,3));
    return 0;
}

char* my_strncat(char *s,char *t, int n){ 
    char * p = s;
    while(*s)
            s++;
    while((*s=*t)!='\0' && n--)
        {
           s++;
           t++;
        }
    *s = '\0';
    return p;
}
