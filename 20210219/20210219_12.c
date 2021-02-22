/*
Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

struct TPoint{
    int m_x;
    int m_y;
};


float calculateDistance(struct TPoint *point1,struct TPoint *point2 );

int main(void){

    struct TPoint point1={2,3};
    struct TPoint point2={5,7};

    printf("%f\n", calculateDistance(&point1, &point2));

return 0;
}

float calculateDistance(struct TPoint *point1,struct TPoint *point2 ){

    float distance = ((point2->m_x-point1->m_x)*(point2->m_x-point1->m_x))+((point2->m_y-point1->m_y)*(point2->m_y-point1->m_y));

    return sqrt(distance);
}