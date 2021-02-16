/*
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.
*/

#include <stdio.h>
int main(){

    int i = 5;
    float f = 5.0f;
    char c = '5';

    int * pi = &i;
    float * pf = &f;
    char * pc = &c;   

    
    printf("%d\n", *pi);
    printf("%f\n", *pf);
    printf("%c\n", *pc);

return 0;
}