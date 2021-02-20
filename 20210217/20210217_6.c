/*
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";
*/

#include <stdio.h>

int countChar( char *str, char toCount);

int main(){

    char str[]= "This is a string to test my idea for search in a char and count it";
    char a = 'm';

    printf( "%d", countChar( str, a));

return 0;
}

int countChar( char *str, char toCount){
    char *p = str;
    int count = 0;
    while(*p++){
        if(*p==toCount){
            count++;
        }
    }
return count;
}


