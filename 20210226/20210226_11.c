/*
тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин
*/

#include <stdio.h>

typedef struct node{ 
    int i;
    typedef struct node * ptr;
    }t_node;

int main(void){
    t_node one = (t_node*)malloc(sizeof(t_node));
    free(one);
return 0;
}