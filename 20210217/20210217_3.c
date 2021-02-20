#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB) 
    { return (nA + nB); }
int fnMinus(int nA, int nB) 
    { return (nA - nB); }
int fnMultiply(int nA, int nB) 
    { return (nA * nB); }
int fnDevide(int nA, int nB) 
    { return (nA / nB); }

int (*func_ptr[4])() = {fnPlus, fnMinus, fnMultiply, fnDevide};

int main(){
    int a, b, sign, rez;

    printf("Enter 0 for plus\nEnter 1 for minus\nEnter 2 for multiplication\nEnter 3 for devision\n");
    scanf("%d", &sign);

    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);

    printf("%d", func_ptr[sign](a,b));
    
    return 0;
}