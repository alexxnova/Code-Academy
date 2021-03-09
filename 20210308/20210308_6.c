
/*
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *fp = NULL;
    
    char s[50];
    int num;

    char * filename = "input3.txt";
    fpos_t pos;
    fp = fopen(filename, "rt");
    if(!fp){
        perror ("Error opening file");
        return(-1);
    }

    while(fscanf(fp,"%d ",&num)!=EOF){
        printf("%d\n",num);
    }
    
    fclose(fp);
    return 0;
}
