/*
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, i, flag, count = 0;
    int prime[1000] = {0};
    int * p = prime;

    for (num = 2; num <= 1000; num++){      // start from number 2
        flag = 1;
        for (i = 2; i <= num / 2; i++){
            if ((num % i) == 0){            // if there is no reminder there is has a factor < then the number
                flag=0;
                break;
            }
        }
        if (flag){
        printf("%d\n", num); 
        *p = num;
        *p++;
        }         
    }
    return 0;
}
