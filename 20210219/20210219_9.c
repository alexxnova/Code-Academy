/*
Направете функця add(), която събира две точки.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct point{
    int m_x;
    int m_y;
    };

void add(struct point * point,struct point *a,struct point *b);
void makePoint(struct point * point, int x,int y);

int main(void){
    struct point * point1 = (struct point *)malloc(sizeof(struct point));
    struct point * point2 = (struct point *)malloc(sizeof(struct point));
    struct point * addPoint = (struct point *)malloc(sizeof(struct point));
    makePoint(point1,1,3);
    makePoint(point2,15,15);

    add(addPoint, point1, point2);

    printf("x=%d\ny=%d\n", addPoint->m_x, addPoint->m_y);

    return 0;
}

void makePoint(struct point * point, int x,int y){
    point->m_x=x;
    point->m_y=y;
return;
}

void add(struct point * point, struct point *a,struct point *b){
    point->m_x=a->m_x + b->m_x;
    point->m_y=a->m_y + b->m_y;
    return;
}

