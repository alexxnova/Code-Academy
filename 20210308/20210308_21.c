/*
Напишете стандартната програма за Linux wc, която приема име на
файл като аргумент от командния ред и изкарва на стандартния изход
стринга "Брой думи: ", последван от броя думи във файла. Програмата да
приема три вида аргументи:
 -c - който да изкарва "Брой символи: "
 -l - който да изкарва "Брой редове: "
 -w - който е за брой думи(тоест стандартното поведение на
програмата)
Ако един два или три от тези аргументи са подадени да не се взема
предвид стандартното поведение.
 Примери:
 > wc f1 // изкарва броя думи
 > wc -с f1 // изкарва броя символи
 > wc -l f1 // изкарва само броя редове
 > wc -c -w f1 // изкарва броя символи и броя думи във f1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countChars(FILE * fp);
int countWords(FILE * fp);
int countLines(FILE * fp);

int main(int argc, char* argv[]){
    char c;
    FILE * fp = NULL;
    if(!strcmp(argv[1],"wc")){
        fp = fopen(argv[argc-1], "r");
        if(argc>3){
            for(int i = 2; i < argc-1; i++) {
                if(!strcmp(argv[i],"-c")){
                    printf("Number of chars: %d\n",countChars(fp));
                    fseek(fp, 0, SEEK_SET);
                }
                else if (!strcmp(argv[i],"-l")){
                    printf("Number of lines: %d\n",countLines(fp));
                    fseek(fp, 0, SEEK_SET);
                }
                else if (!strcmp(argv[i],"-w")){
                    printf("Number of words: %d\n",countWords(fp));
                    fseek(fp, 0, SEEK_SET);
                }
            }
        }else printf("Number of words: %d\n",countWords(fp)); 

        fclose(fp);
        fp=NULL;
    }
    return 0;
}

int countWords(FILE * fp){
    char c;
    int count=1;
    while ((c=fgetc(fp)) != EOF){
        if( c == ' ' || c == '.'){
            count++;
        }
    }
    return count;
}

int countLines(FILE * fp){
    char c;
    int count=1;
    while ((c=fgetc(fp)) != EOF){
        if( c == '\n'){
            count++;
        }
    }
    return count;
}

int countChars(FILE * fp){
    char c;
    int count=0;
    while ((c=fgetc(fp)) != EOF){
            count++;
    }
    return count;
}

