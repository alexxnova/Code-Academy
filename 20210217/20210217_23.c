/*
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);
void bubbleSort(int arr[], int n);
void printArr( int * arr, int len);

int main(void){
    int len;
    int * arr;

    printf("Enter array lenght: ");
    fflush(stdin);
    scanf(" %d",&len);

    arr=(int*)malloc(len*sizeof(int));
    if (arr == NULL)                  
        exit(0);

    for(int i=0; i<len; i++){
        printf("Enter number: ");
        fflush(stdin);
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal array:\n");
    printArr(arr,len);
    bubbleSort(arr, len);
    printf("\nSorted array:\n");
    printArr(arr,len);

return 0;
}

void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void bubbleSort(int *arr, int len) { 
   int i, j; 
   int swapped; 
   for (i = 0; i < len-1; i++) { 
     swapped = 0; 
     for (j = 0; j < len-i-1; j++) { 
        if (arr[j] > arr[j+1]) { 
           swap(&arr[j], &arr[j+1]); 
           swapped = 1; 
        } 
     } 
     if (swapped) // break when no swapping occurred
        break; 
   } 
} 

void printArr( int * arr, int len){
     for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}