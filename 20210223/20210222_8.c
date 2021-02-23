/*
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.
*/

#include <stdio.h>
#include <string.h>

enum tagEType { VALUE_INT, VALUE_STR };

union tagMyData {
    int m_iValue;
    char m_sText[32];
};


void printStringOrNumber(union tagMyData * data, enum tagEType type) {
    if (type==VALUE_INT) {
        printf("INT: %d\n", data->m_iValue);
    } 
    else if (type==VALUE_STR) {
        printf("STR: %s\n", data->m_sText);
    }
}
int main( ) {
    union tagMyData data;
    
    data.m_iValue=65;

    printStringOrNumber(&data, VALUE_INT);
    printStringOrNumber(&data, VALUE_STR);


return 0;
}