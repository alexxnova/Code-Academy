/*
Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг '\0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с).
*/

#include <stdio.h>
void printstr( char *s);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    printstr(str);
    return 0;
}

void printstr( char *s){
    for (int i =0; s[i] ; i++){
        printf("%c", s[i]);

    }
}
