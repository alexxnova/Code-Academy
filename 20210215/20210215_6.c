/*
Дефинирайте променлива „а“, дeфинирайте пойнтер към
нея, присвоете му адреса на променливата. През пойнтера
задайте нова стойност = 5 на променливата „а“. Каква е
стойността на “а”?
*/

#include <stdio.h>
int main(){

    int a;
    int * pi = &a;

    printf("%d\n", *pi);

    *pi = 5;                // Asign value of 5 to the address of a with pointer
    
    printf("%d\n", a);    // The value of a is now 5

return 0;
}