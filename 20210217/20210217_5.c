/*
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int row = 5;
    int col = 5;

    int rangeMin = 1;
    int rangeMax = 5;

    int randMin = 0;
    int randMax = 10;

    int a[row][col];
    int *p = (int*)a;
    
    for(; p<=&a[row-1][col-1]; p++){
            *p = rand()% (randMax+1) + randMin;
            if (*p >=rangeMin && *p <=rangeMax)
                printf("%d", *p);
    }

return 0;
}



