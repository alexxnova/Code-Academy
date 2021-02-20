/*
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'
*/

#include <stdio.h>

int main(void){
    char str[1000];
    char *p = str;
    int i;
    
    printf("Enter a message: ");

    for (i=0; (str[i]=getchar()) != '\n'; i++); // fill up with chars array until new line
    str[i]='\0';    // last element is '\n' replace it terminator '\0'


    while(*p){      //Loop to last element == "\0"
        *p++;       // pointer p points to last element
    }

    printf("Reversal is: ");
    do {putchar(*(--p));        //Decrement to previous element and then display it
    }while ( p != str);         // Compare p adress with the adress of the first element in the array


    return 0;
}
