/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

#include <stdio.h>
#include <string.h>

struct point{
    int m_x;
    int m_y;
    };

struct point makePoint(int x,int y);

int main(void){

    struct point point = makePoint(2,4);
    printf("x=%d\ny=%d\n",point.m_x,point.m_y);

    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
return point;
}