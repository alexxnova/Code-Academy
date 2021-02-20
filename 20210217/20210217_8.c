#include <stdio.h>

void numFibonacci(int size);

int main(){

    int size;
    printf("How long Fibonacci sequence do you want?\n");
    scanf("%d", &size);

    numFibonacci(size);
    
return 0;
}

void numFibonacci(int size){

    int sequence[size]; // user declared the lenght; 
    sequence[0] = 0;
    sequence[0] = 1;    //first two positions are prefilled
    int * ps = &sequence[2];    // pointer to the third position in the sqeuence 
    
    printf("Fibonacci sequence:\n");
    for( ; ps <= &sequence[size]; *ps){
        *ps = *(ps-1) + *(ps-2);
        printf( "%d\n", *ps);
        *ps++;
    } 
}
