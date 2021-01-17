#include <stdio.h>

int test();

int main(void) {
    int i, j, z;
    i = test();
    j = test();
    z = test();
    printf("i = %d\n" "j = %d\n" "z = %d\n", i, j, z);
return 0;
}

int test(){
    static int a=0;
    a++;
    return a;
}
