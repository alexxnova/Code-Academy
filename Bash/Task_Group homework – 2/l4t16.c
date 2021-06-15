#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    int num = atoi(argv[1]);
    int mask = 0x155; //* 0х155 == 101010101
    int result = num ^ mask;

    printf("%d\n", result);
 
    return 0;
}
