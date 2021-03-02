/*
Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.
*/

#include <stdio.h>

typedef struct{ 
    char c; int i; 
    }t_newType;

void t_func(t_lld * t_lldPtr){

}

int main(void){
    typedef long long int t_lld;
    t_lld num = 123456789987654321;
    printf("t_lld variable: %lld\n", num);

    typedef t_lld * t_lldPtr;
    t_lldPtr pnum = &num;
    printf("t_lld pointer: %lld\n", *pnum);


return 0;
}
