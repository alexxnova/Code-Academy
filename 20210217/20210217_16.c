/*
Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int A[5]={1,9,13,17,28};
    int B[5]={2,9,10,14,18};
    int* pa = A;
    int* pb = B;

    int sizeA = sizeof(A)/sizeof(A[0]);
    int sizeB = sizeof(A)/sizeof(A[0]);
    int sizeC = sizeA + sizeB;
    printf("%d\n",sizeC);
    int C[sizeC];
    int* pc = C;

    int i=0, j=0, k=0;

    while( k < sizeC){
        if (A[i] < B[j] && i < sizeA){
            C[k]= A[i];
            i++;
            k++;
        }
        else if (A[i] > B[j] && j < sizeB){
            C[k]= B[j];
            j++;
            k++;
        }
            else{
                C[k]=A[i];  // if the last value >= other last value 
                i++;
                k++;
            }
    }

     for(int i=0;i<sizeC;i++){
        printf("%d\n",C[i]);
    }

    return 0;
}

