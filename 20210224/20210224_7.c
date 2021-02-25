 /*
Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.

When using #pragma ones it is faster and there is less code to write, 
however not all compliers are supporting this directive.
*/

#include <stdio.h>

#ifndef _HEATHER_H_
#define _HEATHER_H_
    double my_sqrt(double y){
        return y*y;
    }
#endif

int main(void) {
    
return 0;
}