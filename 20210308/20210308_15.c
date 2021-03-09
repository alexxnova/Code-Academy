
/*
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.
*/

#include <stdio.h>

int main(){
    char c;
    char original[]="reverse.txt";

    //Open original file to read from
    FILE *fp=NULL;
    fp = fopen(original, "r");
    
    // Position of last character
    fseek(fp, -1l, SEEK_END);
    long fpos = ftell(fp);
    
    //Print reverse
    fpos++;
    while (fpos){
        c=fgetc(fp); 
        printf("%c",c);
        fseek(fp, -2l, SEEK_CUR);
        fpos--;
    }
    fclose(fp);
 return 0;
}
