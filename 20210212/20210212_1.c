/*
 Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    int i, n, sum;

    printf("Enter number of elements: ");      // Enter the lenght of the array
    scanf("%d", &n);

    int *p = (int*)(malloc(n*sizeof(int)));   // Alocate memory - 4 bytes for every element
    if(p == NULL){                            // Check is the alocated adress is valid
        exit(0);
    }

    printf("Enter elements: ");               // User is prompt to enter values to the elements
    for(i = 0; i < n; ++i){
        scanf("%d", p + i);
        sum += *(p + i);                      // Additional assgnment of each element to calculate the sum
    }

    printf("%d", sum);                        
    free(p);                                  // Free the alocated memory

    return 0;
}
