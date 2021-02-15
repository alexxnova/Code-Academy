/*
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    int i = 0;
    int n = 2;
    char c;

    char *buffer = (char*)(malloc(n*sizeof(char)));   
    if(buffer == NULL){                            
        exit(0);
    }

    printf("Enter letter: ");
                                             
    while((c= getchar())!= EOF){
        buffer[i]=c;
        i++;
        if (i >= n){
            n+=2;
            char * pnew = (char*)realloc(buffer, n*sizeof(char));
                if (NULL == pnew){
                        printf("Reallocation memory error!\n");
                        exit(1);
                }
            buffer=pnew;
            //printf("%p\n", pnew);

        }
                  

    }        
    
    buffer[i]='\0'; 
    printf("%s\n", buffer);

    free(buffer);                                  

    return 0;
}
