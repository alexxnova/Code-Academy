/*
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    int i, newSize , size;

    printf("How much memory do you need: ");
    scanf("%d", &size);

    int *p = (int*)(malloc(size));
    if(p == NULL){
        exit(0);
    }

    printf("%d memory is allocated.", sizeof(*p));


    printf("\nEnter the new size: ");
    scanf("%u", &newSize);
    
    p = realloc(p, newSize);
    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
                                
    free(p);

    return 0;
}
