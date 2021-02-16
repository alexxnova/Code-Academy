/*
Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[]= "A string to be copied.";
    char string3[]= "I am very good in strings coping!";
    char string2[]="";
    char string4[]="";

    strcpy(string4, string1);

    printf("%s\n",string4);
    
return 0;
}
