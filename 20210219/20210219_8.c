/*
Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.
*/

#include <stdio.h>
#include <string.h>

struct point{
    int m_x;
    int m_y;
    };

struct rectangle{
    struct point point1;
    struct point point2;
    };

struct point makePoint(int x,int y);

int main(void){

    struct rectangle screen={makePoint(0,0),makePoint(15,15)};

    for(int i=screen.point1.m_x;i<screen.point2.m_x;i++){
        printf("\n");
        for(int j=screen.point1.m_y;j<screen.point2.m_y;j++){
            printf("- ");
        }
    }


    return 0;
}

struct point makePoint(int x,int y){
    struct point point={x,y};
return point;
}

