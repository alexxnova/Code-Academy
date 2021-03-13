
/* Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node_t * head;

int main(void){
    init();
    for (int i=0; i<10;i++){
        add(i);
    }
    printList();
    int x;
    
    dellFirst(&x);
    printf("\n");
    printList();

    dellEnd(&x);
    printf("\n");
    printList();
    
    dellElemReturnAfter(&x, 9);
    printf("\n");
    printList();

    return 0;
}
