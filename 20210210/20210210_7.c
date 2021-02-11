/*
 7. Разгледайте и имплементирайте quicksort алгоритъма.

*/

#include <stdio.h>

void quickSort(int a[], int pFirst, int pLast);
void swap(int *a, int *b);
int partition(int a[], int pFirst, int pLast);
void printArray(int array[], int size);


int main(void)
{
    int arr[10] =
        {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int len = *(&arr + 1) - arr;

    //int *pFirst = a;
    //int *pLast = a[len];

    quickSort(arr,0, len-1);

    printArray(arr, len);
    return 0;
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int a[], int pFirst, int pLast)
{
    int pivot = a[pLast];   // Select the last element as pivot
    int i = (pFirst - 1);   // index of smaller element
    for (int j = pFirst; j <= pLast - 1; j++) 
    {
        if (a[j] <= pivot)  //current is smaller than the pivot 
        {
            i++;            //increment index
            swap(&a[i], &a[j]); 
        }
    }
    swap(&a[i + 1], &a[pLast]);
    return (i + 1); // returns the pivot index
}

void quickSort(int a[], int pFirst, int pLast) //Recursive algorithm
{
    if (pFirst < pLast)
    {
        int prt = partition(a, pFirst, pLast);

        quickSort(a, pFirst, prt - 1); // Before pi sorts the elements on the left of pivot
        quickSort(a, prt + 1, pLast);  // After pi sorts the elements on the right of pivot
    }

}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
