#include <stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
 int main(void){
    char i;
    char x = 255;
    char y = 10;
    char rez = x+y;
    bin(x);
    bin(y);
    bin(rez);
    return 0;
    }