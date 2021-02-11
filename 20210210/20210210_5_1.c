/*
Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}

*/

#include <stdio.h>

int sum_array(const int a[], int n);

int main(void){
    int num[5] = {1, 2, 3, 4, 5};
    
    int len = *(&num + 1) - num; // Calculates length of array

    printf("%d", sum_array(num, len));

    return 0;
}

int sum_array(const int a[], int n){ 
    int sum = 0;
    int *p = a;     // get the adress of the first element (gives a warning, but it works:
                    // "initialization discards 'const' qualifier from pointer target type"
    while (p <= &a[n]){ // until the adress of p in not the adress of the last element in a
        sum += *p++;    // addition assignment of the dereferenced value  and increment the pointer to the adress of the next element
    }

    return sum;
}
