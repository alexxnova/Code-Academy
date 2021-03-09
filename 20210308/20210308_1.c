
/*
Задача 1 Напишете програма, която чете стринг от стандартния вход и
го извежда на стандартния изход с функцията gets(szBuf);
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF 1000

int main( ) {
    char szBuf[BUF];
    do {
        printf( "\nEnter a value: ");
        gets(szBuf);
        printf( "\nYou entered: ");
        puts(szBuf);
    } while (strlen(szBuf) > 0);
 return 0;
}

