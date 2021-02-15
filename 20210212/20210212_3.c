/*
 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int * changeSize( int * arr, int len);


int main(void){

    int n = 5;

    int *p = (int*)(malloc(n*sizeof(int)));   
    if(p == NULL){                            
        exit(0);
    }

    printf("Addresses of reallocated memory: %p\n", p);
    
    p = changeSize( p, n);

    printf("Addresses of reallocated memory: %p\n", p);
    free(p);
    return 0;
}

int * changeSize( int * arr, int len){
    len *=2;
    int *temp = (int*)realloc(arr, len*sizeof(*arr));
    if (NULL == temp){
        printf("Reallocation memory error!\n");
        exit(1);
    }
    return temp;
}