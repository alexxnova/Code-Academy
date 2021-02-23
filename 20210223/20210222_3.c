/*
Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
*/

#include <stdio.h>
#include <string.h>


struct name
{
int variable1;
char variable2[128];
float variable3;
} ;

int main( ) {

    struct name newvariable; 

    newvariable.variable1 = 50;
    strcpy (newvariable.variable2 , "chocolate");
    newvariable.variable3 = 2.50;

    printf("\n%d \t%s \t%f", newvariable.variable1, newvariable.variable2, newvariable.variable3);


return 0;
}