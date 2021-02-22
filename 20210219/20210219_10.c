/*
Задача 10. Направете два триъгълника с отместване.
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

    int k = 0;
    for(int i=0;i<15;i++){
        printf("\n");
        for(int j=0;j<15;j++){
            if ((i>= a.m_x && i<=b.m_x) && (j> a.m_y+(i-a.m_x) && j<b.m_y)) {
                    printf("@");
            }
            else if ((i>= a.m_x&& i<=b.m_x) && (j> (7+a.m_y)+(i-a.m_x) && j<(7+b.m_y))) {
                    printf("@");
            }
            else {
                printf("-");
            }
        }
    }

    return 0;
}

