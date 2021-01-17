#include <stdio.h>

void test();
int a;

int main(void) {
    test();
    test();
    test();
    printf("a = %d\n", a);
return 0;
}

void test(){
    a++;
}
