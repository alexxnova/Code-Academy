/*
Напишете функция void reverse(char s[]), която обръща низа 
char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга
*/

#include <stdio.h>
#include <string.h>

void reverse(char *s);

int main(void){
    char s[]= "Hello";
    reverse(s);
    return 0;
}
void reverse(char *s){
    
    int i,j;
    char rev[strlen(s)];

    for(i = 0, j=(strlen(s)-1); j>=0; i++, j--){
        rev[i] = s[j];
        printf("%c", rev[i]);
    }
    
}
