/*
Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct point{
    int m_x;
    int m_y;
    };

struct rectangle{
    struct point * point1;
    struct point * point2;
    };

void makePoint(struct point * point, int x,int y);

int main(void){

    struct point * point1 = (struct point *)malloc(sizeof(struct point));
    struct point * point2 = (struct point *)malloc(sizeof(struct point));
    makePoint(point1,0,0);
    makePoint(point2,15,15);

    struct rectangle * screen = (struct rectangle *)malloc(sizeof(struct rectangle));
    screen->point1=point1;
    screen->point2=point2;

    for(int i=screen->point1->m_x;i<screen->point2->m_x;i++){
        printf("\n");
        for(int j=screen->point1->m_y;j<screen->point2->m_y;j++){
            printf("- ");
        }
    }


    return 0;
}

void makePoint(struct point * point, int x,int y){
    point->m_x=x;
    point->m_y=y;
return;
}

