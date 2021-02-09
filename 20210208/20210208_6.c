/*
Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.
*/

#include <stdio.h>

int max( int *arr, int len);

int main(void){

    int arr[5];
    int size = sizeof arr / sizeof *arr;
    
    for (int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    } 

    printf("%d",max(arr, size));

    return 0;
}

int max( int *arr, int len){
    int i;
    int max=0;
    for (i=0; i < len ;i++){
        if (max < arr[i]){
            max=arr[i];
        }
    }
    return max;
}
