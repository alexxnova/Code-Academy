#include <stdio.h>

#define PI 3.140159
#define E 2.718

#define SWAP(T,a,b){\
            T temp = (a);\
            (a)=(b);\
            (b)=(temp);\
        }
        
int main(){

    int x = 6;
    int y = 3;
    float fpi = PI;
    float fe = E;

    SWAP(int, x, y);
    printf("%d\n", x);
    printf("%d\n", y);

    SWAP(float, fpi, fe);
    printf("%f\n", fpi);
    printf("%f\n", fe);

    return 0;
}
