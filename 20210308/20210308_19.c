
/*
Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(int argc, char* argv[]){
    char c;
    FILE * fp = NULL;
    for(int i = 1; i < argc; i++)  {
        printf("\n%s\n", argv[i]);
        fp = fopen(argv[i], "r");
        while ((c=fgetc(fp)) != EOF){
                printf("%c", c);
        }
        fclose(fp);
        fp=NULL;
    }
    return 0;
}
