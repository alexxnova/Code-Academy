/*
 Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.
*/

#include <stdio.h>

void function(int a);

int main(){
    int a=5;
    function(a);
    return 0;
}

void function(int a){
    if (a%2){
        printf("Odd number.");
    }
    else{
        printf("Even number.");
    }
    return;
}