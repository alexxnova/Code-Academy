/*
Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
*/
#include <stdio.h>
int absoluteValueInt(int a){
    if (a<0){
        a = a*-1;
    }
    return a;
}

float absoluteValueFloat(float a){
    if (a<0){
        a = a*-1;
    }
    return a;
}


