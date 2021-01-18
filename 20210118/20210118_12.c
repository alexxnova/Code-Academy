#include <stdio.h>
int main() {
    int nX; /* homework, input with scanf */
    int nY;
    printf("Enter number X:\n");
    scanf("%d",  &nX);
    printf("Enter number Y:\n");
    scanf("%d",  &nY);
    if (nX == nY) {
    printf("%d and %d are equal\n", nX, nY);
    } else {
    printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY) { printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY) { printf("%d is smaller than %d\n", nX, nY);
    }
    if (nX <= nY) { printf("%d is smaller or equal to  %d\n", nX, nY);
    }

} /* използвайте и останалите оператори за сравнение */