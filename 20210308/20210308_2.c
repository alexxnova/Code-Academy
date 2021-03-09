
/*
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF 1000

int main( ) {
    /* function to create FILE pointer; initialize it to Null address */
    //FILE * fopen(const char *restrict name, const char *restrict mode);
    FILE * pfile = NULL;
    /* pointer to name */
    char * filename = "myfile.txt";

    pfile = fopen (filename, "wt");
    
    if(pfile==NULL)
        printf("Failed to open %s.\n",filename);

    fclose(pfile);
    pfile=NULL;

    //int rename (const char *oldname, const char *newname);
    if(!rename ("C:\\Users\\alexx\\Documents\\PROJECTS\\CODE_ACADEMY\\codeAcademy\\20210308\\myfile.txt", "C:\\Users\\alexx\\Documents\\PROJECTS\\CODE_ACADEMY\\codeAcademy\\20210308\\myfile_copy.txt"))
        printf("Failed to rename file.");
    else printf("File renamed successfully.");


 return 0;
}

