/*
Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs
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

    FILE * file = fopen("struct.csv", "r"); //create and write to file
 
    for (int i = 0; i<size; i++){
        fscanf(file,"%d,%f,%c",data1[i].m_int,data1[i].m_double, data1[i].m_char);
    }
 
    for (int i = 0; i<size; i++){
        printf("%d,%f,%c\n",data1[i].m_int,data1[i].m_double, data1[i].m_char);
    }
    fclose(file);
    return 0;
}