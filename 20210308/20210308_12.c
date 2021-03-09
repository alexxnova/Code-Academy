
/*
Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща на зад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни
файлове и просто число в байтове.
*/

#include <stdio.h>

int main(){
    fpos_t pos;
    FILE *fp=NULL;
    fp = fopen("myfile_copy.txt", "w+");
    if(fp==NULL){
        perror ("Error opening file");
    return(-1);
    }
    
    char str[]="This is the beginning\n";
    fputs(str,fp);
    fgetpos(fp, &pos);
    printf("Pos: %d\n", pos);

    fseek(fp, 7L, SEEK_SET);
    fgetpos(fp, &pos);
    printf("Pos: %d\n", pos);

    char str1[]="SEEK\n";
    fputs(str1,fp);
    fgetpos(fp, &pos);
    printf("Pos: %d\n", pos);

    fclose(fp);
    fp=NULL;
    
 return 0;
}
