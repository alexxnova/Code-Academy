/*
Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.

*/

#include <stdio.h>

void linear_search(const int a[], int n, int key);

int main(void)
{   int elem = 10;                       // element to search for
    int num[5] = {3, 2, 1, 5, 4};       // array to search
    int len = *(&num + 1) - num;        // Calculates length of array

    linear_search(num, len, elem);

    return 0;
}

void linear_search(const int a[], int n, int key){

    int * pz = &a[n];  //pointer to the last element (a+n-1)
    int flag = 1;

    for(;a <= pz && flag; a++ )//increment pointer adress until it is equal to the last element adress
        if (*a == key){    
            flag = 0;           // elemen found and flag is false breaks the loop
        }

    if (flag){
        printf("Element NOT found!");
    }
    else printf("Element %d found!", key);

    return ;  
    }