/*
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    int i;
    int n = 5;

    int *p = (int*)(malloc(n*sizeof(int)));  
    if(p == NULL){                            
        exit(0);
    }

    printf("Enter elements: ");
                                             
    for(i = 0; i < n; ++i){
        scanf("%d", p + i);
    }
                      
    free(p);                                  

    return 0;
}
