/*  Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.
*/

#include <stdio.h>

void reverse(char *s);

int main(void){
    char s[]= "Hello";
    reverse(s);
    return 0;
}
void reverse(char *s){
    char out[100];
    int c, i=0,last;
    while (s[i] != '\0'){ 
      i++;
    }
    last=i-1;
    while (last>=0){
        putchar(s[last]);
        last--;
    }
}
