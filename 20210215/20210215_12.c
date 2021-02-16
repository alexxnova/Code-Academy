/*
Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int row = 10;
    int col = 10;
    int depth = 10;

    int a[row][col][depth];
    int *p = (int*)a;
    
    int size = sizeof(a)/sizeof(int);

    printf("%d\n", size);
    printf("%d\n", *p);
    printf("%d\n", a[0]);
    printf("%p\n", p);
    printf("%p\n", &a);

    double sum = 0;
    for(; p<=&a[row-1][col-1][depth-1]; p++){
            sum += (*p = rand()% 100 +1);
    }
    double avr = sum/size;
    printf("%f\n", avr);

return 0;
}

