/*
 Напишете функция, която връща резултат (а+в)*4.
*/

#include <stdio.h>

int function(int a,int b);

int main(){
    int a=4,b=4;
    printf("%d", function(a,b));
    return 0;
}

int function(int a,int b){
    return (a+b)*4;
}