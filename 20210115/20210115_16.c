#include <stdio.h>
const float c_Pi = 3.14159;
float areaCircle(float r);

int main() {
    areaCircle(1);
    areaCircle(1.5);
    areaCircle(13);
    return 0;
}

float areaCircle(float r){
    float S;
    S= c_Pi*r*r;
    printf("%f\n", S);
}