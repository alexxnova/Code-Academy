/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct point{
    int m_x;
    int m_y;
    };

void makePoint(struct point * point, int x,int y);

int main(void){

    struct point * point = (struct point *)malloc(sizeof(struct point));
    makePoint(point,2,4);
    printf("x=%d\ny=%d\n",point->m_x,point->m_y);

    return 0;
}

void makePoint(struct point * point, int x,int y){
    point->m_x=x;
    point->m_y=y;
return;
}
