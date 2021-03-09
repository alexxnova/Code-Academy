
/*
Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.
*/

#include <stdio.h>

int main(){

    FILE *fp=NULL;
    fp = fopen("myfile_copy.txt", "a");

    if(fp==NULL){
        perror ("Error opening file");
    return(-1);
    }

    char str[]="append\n";
    fputs(str,fp);
        
    fclose(fp);
    fp=NULL;
    
 return 0;
}
