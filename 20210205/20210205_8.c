/*
Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int atoiPointer(char *s);
double atofPointer( char *s);
void reversePointer(char *s);

int main(void){
    // char intArray[] = "-1234";
    // printf("%d\n", atoiPointer(intArray));


    // char floatArray[] = "123.5";
    // printf("%f\n", atofPointer(floatArray));

    char array[100] = "Hello";
    reversePointer(array);
    return 0;
}


int atoiPointer(char *s)
{
    int res = 0;
    int sign = 1;
    if (*s == '-'){
        sign = -1;
        s++;
    }
    if (*s == '+') s++;

    while (*s>='0' && *s<='9'){
        res = res * 10 + (*s - '0');
        s++;
    }
    
    return res*sign;
}

double atofPointer( char *s){

    double n=0, p;

    while (*s>='0' && *s<='9'){
        n = n * 10 + (*s - '0');
        s++;
    }
    
    if(*s=='.')s++;

    while (*s>='0' && *s<='9'){
        n = n * 10.0f + (*s - '0');
        p*=10.0f;
        s++;
    }
    return n/p;
}

void reversePointer(char *s){
    int len = strlen(s);
    while(*s)
        s++;
    *s--; // back to the last character
    while(len){
         printf("%c",*s--);
         len--;
    }
    
}

