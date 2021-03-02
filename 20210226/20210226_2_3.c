/*
2. Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.

3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.
*/

#include <stdio.h>

typedef struct{ 
    char c; int i; 
    }t_newType;

int main(void){
    typedef long long int t_lld;
    t_lld num = 123456789987654321;
    printf("t_lld variable: %lld\n", num);

    typedef t_lld * t_lldPtr;
    t_lldPtr pnum = &num;
    printf("t_lld pointer: %lld\n", *pnum);


return 0;
}