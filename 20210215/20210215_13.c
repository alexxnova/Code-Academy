/*
Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());
*/

#include <stdio.h>

int main(){
    char s[]= "String";
    char * ps = s;
    int count = 0;

    while(*ps++){
        count++;
    }

    printf("%d\n", count);

return 0;
}

