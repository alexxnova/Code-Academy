/*
Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0

*/

#include <stdio.h>
int our_strcmp(char *s, char *t);

int main(void){
    char str[] = {'H','e','l','l','A','\0'};
    char str2[] = {'H','e','l','l','Z','\0'};;
    printf("%d",our_strcmp(str,str2));
    return 0;
}

int our_strcmp(char *s, char *t){
    while (*s == *t && *s != '\0') {
        s++;
        t++;
  }

return (int)(unsigned char)*s - (int)(unsigned char)*t;
}

