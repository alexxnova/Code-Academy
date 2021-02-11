/*
Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.
*/

#include <stdio.h>

int main(void){
    char str[1000];
    char *p = str;
    int i;
    
    printf("Enter a message: ");

    for (i=0; (str[i]=getchar()) != '\n'; i++); // fill up with chars array until new line
    str[i]='\0'; // last element is '\n' replace it terminator '\0'


    while(*p){ //Loop to last element == "\0"
        *p++;   // pointer p points to last element
    }

    printf("Reversal is: ");
    do {putchar(*(--p));    //Decrement to previous element and then display it
    }while ( p != str); // Compare p adress with the adress of the first element in the array


    return 0;
}
