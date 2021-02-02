#include <stdio.h>
#include "p.h"

int main(){
    int a = -9;
    printf("%d\n",squareRoot(a));
    a = absoluteValueInt(a);
    printf("%d\n",squareRoot(a));
    return 0;
}