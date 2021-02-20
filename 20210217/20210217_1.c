#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) 
    { return (nA + nB); }
int fnMinus(int nA, int nB) 
    { return (nA - nB); }

int main(int argc, char *argv[])
{
    int (*pfCalc)(int, int) = NULL; // It is good to point to NULL when we declare them
    
    if (argc < 4){
        printf("\nUsage: %s arg1 (+, -, x, /) arg2\n", argv[0]);
    }
    else if ('-' == argv[2][0]){
        pfCalc = fnMinus;
    }
    else if ('+' == argv[2][0]){
        pfCalc = fnPlus;
    }
    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}
