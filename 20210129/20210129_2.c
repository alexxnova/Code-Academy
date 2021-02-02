#include <stdio.h>

const float pi = 3.14;

float areaCircle(float r);
float area();

int main(){
    float circle = area();
    printf("%f", circle);
    return 0;
}

float areaCircle(float r){
    float area = pi*r*r;
    return area;
}

float area(){
    float r;
    scanf("%f", &r);
    return areaCircle(r);
}