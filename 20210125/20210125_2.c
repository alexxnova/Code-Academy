/*Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();*/

#include <stdio.h>
int main(void){
    int c, i=0; 
    while((c= getchar()) != EOF){
        if ((c =='\n')i++;          
    }
    printf("Numer lines: %d", i);   
    return 0;
}
