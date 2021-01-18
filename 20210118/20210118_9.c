#include <stdio.h>
int main(){
    float iX = 13;
    float iY = 44;
    float iResult = 0;
    iResult = iY * iX;
    printf("%.2f * %.2f: %.2f\n", iY, iX, iResult);
    iResult = iY + iX;
    printf("%.2f + %.2f : %.2f\n", iY, iX, iResult);
    
    /* homework: examples for '*' и '+',
     float - използвайте вместо int
    */
    return 0;
}