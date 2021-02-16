/*
 Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[]= "A string to be copied.";
    char string3[]= "I am very good in strings coping!";
    char string2[]="";
    char string4[]="";

    memset(string4, '\0', sizeof(string1)); // Fill a block of memory at the address of string4 with the size of string1, fills it up with 0
    strcpy(string4, string1);

    printf("%s\n",string4);
    
return 0;
}
