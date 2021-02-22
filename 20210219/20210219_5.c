/*
Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @

*/

#include <stdio.h>


struct point{
    int m_x;
    int m_y;
};

int main(){

    struct point a={3,4};
    struct point b={7,10};

    char rect[15][15];
    for(int i=0;i<15;i++){
        printf("\n");
        for(int j=0;j<25;j++){
            if ((i>= a.m_x && i<=b.m_x) && (j>= a.m_y && j<=b.m_y)) {
                    printf("@");
            }
            else {
                printf("-");
            }
        }
    }

    return 0;
}