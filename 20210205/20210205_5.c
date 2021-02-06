/*
Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void our_strcat(char *s, char *t);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    char str2[] = {'A','g','a','i','n','\0'};
    our_strcat(str, str2);
    return 0;
}

void our_strcat(char *s, char *t){
    int i=0, j=0;
    
    for(;s[i];i++); // go to last element

    while((s[i++] = t[j++]) != '\0')
        ;

    for(;*s;s++)
    printf("%c", *s);
}

