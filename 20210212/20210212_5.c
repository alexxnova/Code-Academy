/*
Разширяване на заделена памет с realloc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    int i;
    int n = 5;

    int *p = (int*)(malloc(n*sizeof(int)));   // Alocate memory - 4 bytes for every element
    if(p == NULL){                            // Check is the alocated adress is valid
        exit(0);
    }

    printf("Enter elements: ");
                                             // User is prompt to enter values to the elements
    for(i = 0; i < n; ++i){
        scanf("%d", p + i);
    }

    p = realloc(p, n * sizeof(int));
    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(1);
    }
                      
    free(p);                                  // Free the alocated memory

    return 0;
}
