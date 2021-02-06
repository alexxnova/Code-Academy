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

void pointer_strcat(char *s, char *t);
char* mystrcat (char* s, char* t);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    char str2[] = {'A','g','a','i','n','\0'};
    printf("%s",mystrcat(str, str2));    
    return 0;
}

void pointer_strcat(char *s, char *t) {

    for(;*s;s++)

    // while(*s){
    //     s++;
    // } 

    //printf("%c",  *s);
    
    while((*s++=*t++))
         ;

    for(;*t;t++)
        printf("%c", *t); 

    // printf("%c", s[0]); 
    // //for(int i=0;s[i];i++)
    // printf("%c", s[0]);    
}

char* mystrcat(char *s,char *t){ 
    char * p = s;
    while(*s)
        s++;
    while((*s=*t)!='\0'){
        s++;
        t++;
    }
    *s = '\0';
    return p;
}
