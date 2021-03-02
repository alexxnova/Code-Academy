/*
Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.
*/

#include <stdio.h>
#define MAX 100

typedef struct { 
    char s[MAX]; 
    int i; 
}key_t;

int main(void){
  
    key_t list = {"Documents", 12};
    printf("%s, %d ", list.s, list.i);

return 0;
}
