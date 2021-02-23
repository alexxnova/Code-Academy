/*
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.
*/

#include <stdio.h>
#include <string.h>

enum tagEType { VALUE_INT, VALUE_STR };

union tagMyData {
    int m_iValue;
    char m_sText[32];
};


void reverseStrOrInt(union tagMyData * data, enum tagEType type) {
    if (type==VALUE_INT) {
        printf("INT to STR: %s\n", data->m_sText);
    } 
    else if (type==VALUE_STR) {
        printf("STR to INT: %d\n", data->m_iValue);
    }
}
int main( ) {
    union tagMyData data;
    
    data.m_iValue=65;

    reverseStrOrInt(&data, VALUE_INT);
    reverseStrOrInt(&data, VALUE_STR);


return 0;
}