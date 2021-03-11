#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

int main(int argc, char* argv[]){
    size_t n=1000;
    char c;
    char s1[n];
    char s2[n];

    FILE * fp1 = NULL;
    FILE * fp2 = NULL;

    fp1 = fopen("zad2_check.c", "r");

    if (fp1 == NULL || fp2 == NULL){
        perror("");
        exit(EXIT_FAILURE);
    }

    while (!feof(fp1)){
            fgets(s1,sizeof(s1),fp1);
            fgets(s2,sizeof(s2),fp2);
                if (strncmp(s1,s2,n)){
                    printf("Line in first file: %s", s1);
                    printf("Line in second file: %s", s2);
                }
        }

    fclose(fp1);
    fp1=NULL;
    fclose(fp2);
    fp2=NULL;
    
    return 0;
}
