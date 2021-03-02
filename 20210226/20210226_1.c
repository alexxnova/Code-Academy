/*
 Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.

*/

#include <stdio.h>

typedef struct{ 
    char c; int i; 
    }t_newType;

int main(void){

    t_newType t = {'a', 5};
    printf("t_newType t.c= %c ; t.i= %d", t.c, t.i);

return 0;
}
