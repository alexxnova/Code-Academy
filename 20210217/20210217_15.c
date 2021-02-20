/*
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randNumberUnique(size_t len, int size);
void lottoSwitch(int gameCode);

int main(void){
    int game;

    printf("Which lotto game to play?\nFor 5/35 PRESS 1\nFor 6/42 PRESS 2\nFor 6/49 PRESS 3\n");
    scanf("%d", &game);
    printf("Your lucky numbers are:\n");
    
    lottoSwitch(game);

    return 0;
}

void lottoSwitch(int gameCode){
    int len, size;
    switch(gameCode){
        case 1:
            len = 4;
            size = 35;
            randNumberUnique(len, size);
            break;
        case 2:
            len = 5;
            size = 42;
            randNumberUnique(len, size);
            break;
        case 3:
            len = 5;
            size = 49;
            randNumberUnique(len, size);
            break;
        default:
            printf("Error! Invalid choice");
    }
}

void randNumberUnique(size_t len, int size){
    srand(time(0));
    int arr[len];
    int *p1 = arr;
    int **p2 = &p1;
    
    int i=0;
    while(i<=len){
        int flag = 1;
        int num = rand() % ((size-1)+1);
        for(int j =0; j < i ; j++)  
            if (num == arr[j]){flag=0;}
        if (flag){
            arr[i]=num;
            i++;
        }
    } 
    for(i=0; i <= len; i++){
        printf("%d \n", arr[i]);    
    }
}


