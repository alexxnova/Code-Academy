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

//int * randomIndex(size_t len);
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

    // int * randomIndex(size_t len){
    //     int position[len];
    //     int * p;

    //     p = malloc(len * sizeof(*p));   // to return poiner to array which is not static must alocate memory
    //     if (p == NULL)                  //check malloc success
    //         return NULL;
    //     int * pStart = p;

    //     for(int i=0; i<len; i++){       // populate array from 0 to length declare by user
    //         p[i]=i;
    //         }

    //     for (int j=0; j<len; j++){
    //         int randIndex = rand() % len;     // random index to swap values
    //         int temp = p[j];
            
    //         p[j] = p[randIndex];  
    //         p[randIndex] = temp;
    //         }
    //     for (int i = 0; i < len; i++) {    // print array
    //         //printf("%d ",p[i]);
    //     }
    // return  pStart;
    // }

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
