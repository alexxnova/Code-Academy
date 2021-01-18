#include <stdio.h>
int main() {
    int iCounter = 0;
    while( ++ iCounter < 3 ) {
    printf("Counter %d\n", iCounter);
    printf("++ Counter: %d\n", ++ iCounter);
    printf("-- Counter: %d\n", -- iCounter);
    printf("Counter ++: %d\n", iCounter ++);
    printf("Counter --: %d\n", iCounter --);
    }
    return 0;
} /* Какво става, ако се препълни броячът? */