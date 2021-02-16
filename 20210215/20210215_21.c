/*
Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.
*/

#include <stdio.h>
#include <string.h>

int cmpfunc (const void * a, const void * b);

int main(){
    char s[]= "bcadfge";

    char * ps = s;

    qsort(s, strlen(s), sizeof s[0], cmpfunc);

    printf("%s\n", s);

return 0;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}

