/*
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randLowerCase(void);
char randUperCase(void);
char randSymbols(void);
char randNumbers(void);


int main(void){
    
    srand(time(0)); 
    int len ;
    printf("Enter password length:\n");
    scanf("%d", &len);

    char * password;
    password=(char*)malloc((len+1));

    char (*randomFunct[4])(void)={randLowerCase,randUperCase,randNumbers,randSymbols};
        
    for(int i=0;i<len;i++){
        // For each password position choose a random function to generate char
        int f=rand() % 4;    
        password[i]=randomFunct[f]();
        printf("%c",password[i]); 
        }
        
    free(password);

    return 0;
}


    char randLowerCase(void){
        return (rand() % (123 - 97) + 97);
    }

    char randUperCase(void){
        return (rand() % (92 - 65) + 65);
    }

    char randSymbols(void){
        return (rand() % (39 - 33) + 33);
    }

    char randNumbers(void){
        return (rand() % (58 - 48) + 48);
    }
