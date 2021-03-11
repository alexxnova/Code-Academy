/*
Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#pragma pack(1)

enum tagEType { VALUE_INT, VALUE_CHAR, VALUE_DOUBLE  };

struct tagData {
    int m_int; 
    char m_char; 
    double m_double;
};


int main( ) {
    srand(time(0));
    int size = 20;
    struct tagData data1[size];
    struct tagData * dataPtr = NULL;
    dataPtr=data1;

    // Fillup struct array
    for (int i = 0; i<=size; i++){
        data1[i].m_int=rand()%100;
        data1[i].m_double=(double)(rand()%100);
        data1[i].m_char=rand()%(91-65)+65;
    }

    //declare a reference to a file
    FILE * file = NULL;
    file = fopen("struct.csv", "w"); //create and write to file
    //check was the file created
    if(file == NULL){
        printf("Unable to create file.\n");
            exit(0);
    }
    // redirect the result  of printf to output.csv file in cmp as .\a.exe > new.csv  
    for (int i = 0; i<size; i++){
        printf("%d,%f,%c\n",data1[i].m_int,data1[i].m_double, data1[i].m_char);
    }
    
    fclose(file);
    return 0;
}
