/*
Първата функция да калкулира най-малко общо кратно на две положителни
числа.
*/
#include <stdio.h>

 int leastCommonMultiple(int a,int b){
     int lcm = (a > b) ? a : b;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        ++lcm;
    }
    return lcm;
 }