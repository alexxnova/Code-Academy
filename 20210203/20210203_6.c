/*
Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). 
*/

#include <stdio.h>

void my_swap(int* a, int* b);

int main() {
    int n1 = 2;
    int n2 = 6;
    my_swap(&n1, &n2);
    printf("%d\n%d\n",n1,n2);
    
  return 0;
}

void my_swap(int* a, int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}