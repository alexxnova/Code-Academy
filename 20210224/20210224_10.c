 /*
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));
*/

#include <stdio.h>
#include <math.h>

#define AVG(x,y) ((x)+(y))/2
#define AVGRANGE(num1,num2,avg) for (int i=num1; i<=(num2); i++) {avg+=i;} avg/=(num2)-(num1);    
#define POWER(x,y) for ((y);(y)>1;(y)--) {(x)*=(x);}
#define TOUPPER(a) if ((a)>='a'&& (a)<='z'){(a)-=32;}
#define DISP(f, x) printf("sqrt (%f) = %f\n", (x), f(x));                            

int main() {
    // 1.
    printf("AVG: %d\n", AVG(5,8));
    // 2.
    int a= 1;
    int b= 6;
    float res=0;
    AVGRANGE(a,b,res);
    printf("AVGRANGE: %f\n", res);
    // 3.
    int x= 2;
    int y= 4;
    POWER(x,y);
    printf("POWER: %d\n", x); 
    // 4.
    char small = 'c';
    TOUPPER(small);
    printf("TOUPPER: %c\n", small);
    // 5.
    DISP(sqrt, 5.0);

 return 0;
} 