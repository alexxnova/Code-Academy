/*
Напишете функция, която изчислява произведението на
числата от 1 до 30.
*/
#include <stdio.h>

int sumOneToThirty(void);

int main() {
printf("Sum from 1 to 30: %d\n", sumOneToThirty());
}

int sumOneToThirty(void){
    int i=0, sum;
    for(sum=1; i<=30; i++){
        sum += i;
        }
    return sum;
}