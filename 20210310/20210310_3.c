/* Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

int main(int argc, char* argv[]){

    char s[SIZE];

    FILE * fp = NULL;
    
    for(int i = 1; i < argc; i++){
        int count=40;   // Number of line in one page
        int page=1;

        printf("\nFile: %s\n", argv[i]);    // Print file name
        fp = fopen(argv[i], "r");
        if (!fp){
            perror("");
            exit(EXIT_FAILURE);
        }
        while (!feof(fp)){
            
            fgets(s,sizeof(s),fp);
                    printf("%s", s);
                    count--;

            if(count==0){
                printf("Page: %d\n", page);    // if more than 42 line were printer increment page
                page++;
                count=42;
            }
        }
        
        if(count>0)
            while(count){
                printf("\n");
                count--;
            }
        printf("Page: %d\n", page++);
        fclose(fp);
        fp=NULL;
    }
    return 0;
}