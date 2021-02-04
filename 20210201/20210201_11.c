/*
напишете функция void  , която
премахва символа с от низа s[]

*/

#include <stdio.h>
#include <string.h>
#include "str.h"

void squeeze(char s[], int c);

int main(void){
    int num = 5;
    char str[]="2525252";

    squeeze(str, num);
    
    return 0;
}

void squeeze(char s[],int c){
    int i,j;
    for(i=j=0;s[i]!='\0';i++)
        if(s[i]!=c)
            s[j++]=s[i];

    s[j]='\0';
    printstr(s);  
}


// char* reverse(char *s){
    
//     int i,j;
//     char rev[strlen(s)];

//     for(i = 0, j=(strlen(s)-1); j>=0; i++, j--){
//         rev[i] = s[j];
//         printf("%c", rev[i]);
//     }
    
// }

// char* itoa(int n, char* s){
//     int i=0;
//     do {
//         int rem = n % 10;
//         s[i] = (rem > 9)? (rem-10) + 'A' : rem + '0';
//         n = n/10;
//         i++;
//     }while (n != 0);

//     return s;
// }

// void squeeze(char s[], int c){
//     itoa(c,s)
// }