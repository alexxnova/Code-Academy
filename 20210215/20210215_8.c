/*
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.
*/

#include <stdio.h>
int main(){
    int a;
    int * pi = &a; 
    printf("%p\n", pi); // prints the address of the variable 
return 0;
}