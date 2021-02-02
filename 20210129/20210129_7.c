/*
Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.

*/

#include <stdio.h>

float areaRightTriangle(float b, float p);
float areaRectangle(float l, float w);

int main(){
    float a=5, b=3;

    printf("Area of right triangle: %f\n", areaRightTriangle(a,b));
    printf("Area of rectangle: %f\n", areaRectangle(a,b));

    return 0;
}

float areaRightTriangle(float b, float p){
    float area = b*p*0.5;
    return area;
}

float areaRectangle(float l, float w){
    return areaRightTriangle(l,w)*2;
}