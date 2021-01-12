#include <stdio.h>

int main() {
    int x=3;
    int y=5;

    int rez= x&y;
    printf("%d\n", rez);

    rez= x|y;
    printf("%d\n", rez);

    rez= x^y;
    printf("%d\n", rez);

    return 0;
}
