
/*
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.
*/

#include <stdio.h>

int main(){
    char c;
    char original[]="myfile.txt";
    char temp[]="temp.txt";

    //Open original file to read from
    FILE *fp=NULL;
    fp = fopen(original, "r");

    // Open temp file to write in
    FILE *ftemp=NULL;
    ftemp = fopen(temp, "wt");

    //UPPER CASE
    while ((c=fgetc(fp)) != EOF){
        if(c>='a' && c<='z'){
            c -=32;
        }
        fputc(c, ftemp);
    }

    fclose(fp);
    fclose(ftemp);

    //DELETE
    if (remove(original) == 0) 
      printf("Deleted successfully.\n"); 
    else
      printf("Unable to delete the file.\n"); 

    //RENAME
    if(rename (temp, original)!=0)
        printf("Failed to rename file.\n");
    else printf("File renamed successfully.\n");

    //PRINT
    fp = fopen(original, "r");
    while ((c=fgetc(fp)) != EOF){
        printf("%c",c);
    }
 return 0;
}
