/*
 Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?
*/

#include <stdio.h>

int main(void){
    char str[1000];
    char *p = str;
    int i;

    printf("Enter a message:");

    for (i=0; (str[i]=getchar()) != '\n'; i++); // fill up with chars array until new line
    str[i]='\0'; // last element is '\n' replace it terminator '\0'


    while(*p){ //Loop to last element == "\0"
        *p++;   // pointer p points to last element
    }
    *p--; // pointer decremented to the last element containing char
    i = 0;
    while ( p != str){ //until pointer and array are at diffrent adress
        if (*p != str[i]){
            return printf("Message is NOT a palindrome.");
        }
        *p--;
        i++;
    }
    return printf("Message is a palindrome.");
}
