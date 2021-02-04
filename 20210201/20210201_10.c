/*
Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].

*/

#include <stdio.h>
#include <string.h>

void reverse(char *s);
void itoa(int n, char s[ ], int b);

int main(void){
    int num = 255, base = 16;
    char str[32];
    
    itoa(num, str, base);
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

void itoa(int n, char s[ ], int b){
    int i=0;
    do {
        int rem = n % b;
        s[i] = (rem > 9)? (rem-10) + 'A' : rem + '0';
        n = n/b;
        i++;
    }while (n != 0);

    reverse(s);
}