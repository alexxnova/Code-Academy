
/*
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.
*/

#include <stdio.h>

int main(){
    char c;
    int count=0;

    char myFile[]= "myfile.txt";

    FILE *fp=NULL;
    fp = fopen(myFile, "r");
    if(fp==NULL){
        perror ("Error opening file");
    return(-1);
    }
    
    while ((c=fgetc(fp)) != EOF){
        if( c == '\n'){
            count++;
        }
    }
    
    printf("%d", count);

    fclose(fp);
    fp=NULL;
    
 return 0;
}
