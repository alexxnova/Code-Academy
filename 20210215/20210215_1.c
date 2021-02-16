/*
Разширяване на заделена памет с realloc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *month_name(int n);

int main(void){

    int n = 6;

    printf("%s" ,month_name(n));

    return 0;
}

char *month_name(int n){
    static char *name[] = {
    "Illegal month",
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"
    };
return name[n];
}
