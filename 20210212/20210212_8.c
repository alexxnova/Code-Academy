/*
Разширяване на заделена памет с realloc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    int i;
    int n = 5;

    int *p = (int*)(alloca(sizeof(int)));   
    if(p == NULL){                           
        exit(0);
    }

    printf("%p\n", p);

    for(i = 0; i < n; ++i){
        printf("%d", p[i]);
    }


    return 0;
}
