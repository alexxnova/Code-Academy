/* Eneter text until you enter questionmark.
Print only the letters.
*/

#include <stdio.h>
int main(void){
    int in; 
    while((in=getchar()) != ('?')){
        if ((in >='a' && in <='z') || (in >='A' && in <='Z')){
        putchar(in);
        }
    }
    return 0;
}
