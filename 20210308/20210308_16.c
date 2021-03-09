
/*
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. 
*/


#include <stdio.h>

int main(){
    char c;
    char original[]="myfile.txt";
    char temp[]="temp.txt";

    int row=2; // Number of line to delete
    int count=0;// count lines

    //Open original file to read from
    FILE *fp=NULL;
    fp = fopen(original, "r");

    // Open temp file to write in
    FILE *ftemp=NULL;
    ftemp = fopen(temp, "wt");

    // Skip row position 
    while ((c=fgetc(fp)) != EOF){
        if(count!=row-1){       // row-1, because there is only one '/n' before the second line
            fputc(c, ftemp);    // write to temp file  
        }
        if( c == '\n'){
            count++;
        }
    }

    fclose(fp);
    fclose(ftemp);

 return 0;
}
