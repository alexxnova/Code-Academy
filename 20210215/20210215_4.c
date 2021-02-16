/*
Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?
*/

#include <stdio.h>
int main(){

    int * pi; 
    printf("%p\n", pi); // prints the address of the pointer itself

return 0;
}