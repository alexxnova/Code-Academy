/*
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.
*/

#include <stdio.h>
#include <string.h>

enum tagEType { VALUE_INT, VALUE_STR };

union tagMyData {
    int m_iValue;
    char m_sText[32];
};
 struct tagUnite {
     union tagMyData m_var;
     enum tagEType m_type;
 };

void printStruct(struct tagUnite * data) {
    if (data->m_type==VALUE_INT) {
        printf("INT: %d\n", data->m_var.m_iValue);
    } 
    else if (data->m_type==VALUE_STR) {
        printf("STR: %s\n", data->m_var.m_sText);
    }
}
int main( ) {
    struct tagUnite data[2];
    
    data[0].m_var.m_iValue=65;
    data[0].m_type=VALUE_INT;


    strcpy(data[1].m_var.m_sText , "Fifteen");
    data[1].m_type=VALUE_STR;
    

    printStruct(&data[0]);
    printStruct(&data[1]);
return 0;
}