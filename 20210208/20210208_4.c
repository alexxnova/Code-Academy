/*
Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.
*/

#include <stdio.h>

double average( int *arr, int len);

int main(void){
    int arr[5];
    int size = sizeof arr / sizeof *arr;
    for (int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    } 
    printf("%f",average(arr, size));
    return 0;
}

double average( int *arr, int len){
    int i;
    double sum;
    for (i=0; i < len ;i++){
        sum+= (double)arr[i];
    }
    return sum/len;
}
