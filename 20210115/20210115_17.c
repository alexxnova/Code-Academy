#include <stdio.h>
const float c_Pi = 3.14159;
float areaEllipse(float a, float b);

int main() {
    areaEllipse(1,2);
    areaEllipse(1.5,2);
    areaEllipse(13,2);
    return 0;
}

float areaEllipse(float a, float b){
    float S;
    S= c_Pi*a*b;
    printf("%f\n", S);
}