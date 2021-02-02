/*Пребройте символите, подавани на конзолата, с
функцията getchar();*/

#include <stdio.h>
int main(void){

    int c, i=0;
    c = getchar();
    
    while(c != EOF){
        putchar(c);
        c = getchar();
        i++;           
    }
    printf("\n%d", i);
    
    return 0;
}
