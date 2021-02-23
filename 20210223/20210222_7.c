/*
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.
*/

#include <stdio.h>
#include <string.h>


union tagMyData {
    int m_iValue;
    float m_fValue;
    char m_sText[32];
};

int main( ) {
    union tagMyData data;
    data.m_iValue=15;
    printf("\n%d", data.m_iValue);
    
    data.m_fValue=1.5;
    printf("\n%f",data.m_fValue);

    strcpy(data.m_sText , "Fifteen");
    printf("\n%s",data.m_sText);

    printf("\n%d\n%f\n%s",data.m_iValue,data.m_fValue, data.m_sText);
return 0;
}