/*
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.
*/

#include <stdio.h>
#include <string.h>


union tagMyData {
    int m_negative;
    int m_positive;
    char m_char;
};

int main( ) {
    union tagMyData data;
    data.m_negative=-7;
    printf("\n%d", data.m_negative);
    
    data.m_positive=10;
    printf("\n%d",data.m_positive);

    data.m_char='c';
    printf("\n%c",data.m_char);

return 0;
}