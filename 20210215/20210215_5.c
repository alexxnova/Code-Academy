/*
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).
*/

#include <stdio.h>
int main(){
    
    //int * pi = &a; // Can not initialize pointer to a variable that do not excist yet
    int a = 34; 

    //Можете ли да умножите пойнтер по пойнтер?
    int * pi;
    int * pf;
    
    pi*pf;

    // При тази декларация колко пойнтера имаме:
    int *p, k;      // *p is pointer, k is an integer variable

    printf("%p\n", *p);
    printf("%d\n", k);

return 0;
}