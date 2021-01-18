#include <stdio.h>

int main() {
    int i = 0, j = 0;

    printf("i = %d, j = %d\n", i, j);
    printf("j=i++ -> %d\n", j=i++);
    printf("i = %d, j = %d\n", i, j);
    printf("j = ++i -> %d\n", j=++i);
    printf("i = %d, j = %d\n", i, j);
    printf("i-- -> %d\n", i--);
    printf("i = %d, j = %d\n", i, j);

    return 0;
}