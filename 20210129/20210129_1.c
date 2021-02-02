/*
Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.
*/

#include <stdio.h>

const float pi = 3.14;

float areaCircle(float r);

int main(){
    float circle = areaCircle(5);
    printf("%f", circle);
    return 0;
}

float areaCircle(float r){
    float area = pi*r*r;
    return area;
}