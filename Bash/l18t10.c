#include <stdio.h>

int isPrime(int n);

int main(void){
	
    int max = 1000;

    int (*functionPointer)(int);
    functionPointer = &isPrime;
    int primeNumbers[max];
    int index = 0;

    for(int i = 0; i <= max; i++){
        int num = (*functionPointer)(i);
        if(num > 0){
            primeNumbers[index] = num;
            index++;
        }
    }

    printf("Prime numbers between 0 and 1000:\n");
    for(int i = 0; i < index; i++){
        printf("%d ", primeNumbers[i]);
    }

    return 0;
}

int isPrime(int n){
    int prime = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    if(n <= 1){ /* The number 1 is neither prime nor composite */
        return 0;
    }
    if(prime == 1) {
        return n;
    }
}
