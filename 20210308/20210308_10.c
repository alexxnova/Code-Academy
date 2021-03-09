
/*
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.
*/

#include <stdio.h>

int main(){

    FILE *fp=NULL;
    fp = fopen("myfile_copy.txt", "a");
    if(fp==NULL){
        perror ("Error opening file");
    return(-1);
    }

    long fpos = ftell(fp);
    printf("Pos 1: %ld\n", fpos);

    char str[]="append\n";
    fputs(str,fp);

    printf("Pos 2: %ld\n", ftell(fp)); 

    fclose(fp);
    fp=NULL;
    
 return 0;
}
