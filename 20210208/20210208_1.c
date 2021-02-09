/*
Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.
*/

#include <stdio.h>

void printArray( int *a);

int main(void){
    int arr[5];
    int size = sizeof arr / sizeof *arr;

    for (int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printArray(arr);

    return 0;
}

void printArray( int *a){
    int i;
    for (i=0; i < 5 ;i++){
        printf("%d", a[i]);
    }
}
