/*
. Направете функця add(), която събира две точки.
*/

#include <stdio.h>
#include <string.h>

struct point{
    int m_x;
    int m_y;
    };

struct point add(struct point *a,struct point *b);
struct point makePoint(int x,int y);

int main(void){

    struct point point1 = {1,2};
    struct point point2 = {3,4};

    struct point addPoint = add(&point1, &point2);
    printf("x=%d\ny=%d\n", addPoint.m_x, addPoint.m_y);

    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
    return point;
}

struct point add(struct point *a,struct point *b){
    return makePoint( a->m_x + b->m_x, a->m_y + b->m_y);
}

