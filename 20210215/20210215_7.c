/*
Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.
*/

#include <stdio.h>

int main(){

    int a;
    int * pi = &a;

    printf("%d\n", a);

    *pi = 5; 
    *pi += 5;

    printf("%d\n", a);  

return 0;
}