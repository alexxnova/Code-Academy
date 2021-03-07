
/*
Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int plankShort;
    int plankLong;
    int bracketSmall;
    int bracketBig;
    int screw;
    //warehouse * storage;
}shelf;

typedef struct {
    int A;
    int B;
    int C;
    int D;
    int E;
}warehouse;

int minIntArr(int arr[], int len);
int numberShelfs(shelf * shelf, warehouse * warehouse);

int main(void){
    warehouse * depot = (warehouse*)(malloc(sizeof(warehouse)));  // alocate memory for warehouse struct
    *depot = (warehouse){33, 55, 88, 22, 99};                //initialize pointer

    shelf * one = (shelf*)(malloc(sizeof(shelf)));  // alocate memory for shelf struct
    *one = (shelf){4, 6, 12, 2, 14};                //initialize pointer    

    int shelfsAvailable = numberShelfs(one,depot);
    printf("\n%d\n", shelfsAvailable);

    free(one);
    free(depot);
    return 0;
}

int numberShelfs(shelf * shelf, warehouse * warehouse){
    int available[5]={(warehouse->A/shelf->plankShort),
                        (warehouse->B/shelf->plankLong),
                        (warehouse->C/shelf->bracketSmall),
                        (warehouse->D/shelf->bracketBig),
                        (warehouse->E/shelf->screw)};
    

    int len = sizeof(available)/sizeof(available[0]);
    return minIntArr(available, len);
}

int minIntArr(int arr[], int len){
    int min=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]<min) min=arr[i];
    }
return min;
}