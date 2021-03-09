/*
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.
*/

#include <stdio.h>

int writeAndCountChars(FILE * fp);

int main()
{
    FILE *fp;
    fp = fopen("zad_9.txt", "wt");

    printf("Result %d", writeAndCountChars(fp));

    fclose(fp);
    return 0;
}

int writeAndCountChars(FILE * fp){

    fprintf(fp,"%s %d %s","zadacha",9,"gotova li e");
    //fseek(fp, 0, SEEK_SET);
    char c;
    int count=0;
    while ((c=fgetc(fp)) != EOF){
            count++;
    }
    printf("Result %d", count);
    if(count>0){
        return count;}
    else return -1;
}