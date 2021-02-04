/*
Напишете функция, която изчислява произведението на
числата от 1 до 30.
*/
#include <stdio.h>

int sumRecursive(int last);

int main() {
printf("Sum from 1 to 30: %d\n", sumRecursive(30));
}

int sumRecursive(int last){
    if (last != 0){
        printf("%d\n", last);
        return last += sumRecursive(last-1);
    }
    else{
        return printf("ERROR");
    }
    ;
}