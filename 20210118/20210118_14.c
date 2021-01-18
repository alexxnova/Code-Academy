#include <stdio.h>
int main() {
    int nA; /* използвайте scanf */
    int nB;
    int nX;
    int nY;

    printf("Enter number X:\n");
    scanf("%d",  &nX);
    printf("Enter number Y:\n");
    scanf("%d",  &nY);
    printf("Enter number A:\n");
    scanf("%d",  &nA);
    printf("Enter number B:\n");
    scanf("%d",  &nB);

    if ( nA > nB && nA !=0 ) {
    printf("&& Operator : Both conditions are true\n");
    }
    if ( nX > nY || nY != 20) {
    printf("|| Operator : Only one condition is true\n");
    }
    if ( ! (nA > nB && nB !=0 ) ) {
    printf(" ! Operator : Both conditions are true\n");
    } else {
    printf("Both conditions are true.\n");
    }
}
/* опитайте различни комбинации, следете приоритета на
операторите */