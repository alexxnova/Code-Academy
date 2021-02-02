/*
 Напишете функция, която връща резултат a*2 + b*c.
*/

#include <stdio.h>

int function(int a, int b, int c);

int main(){
    int a=4,b=4, c=4;
    printf("%d", function(a,b,c));
    return 0;
}

int function(int a, int b, int c){
    return (a*2)+b*c;
}