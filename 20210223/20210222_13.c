/*
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};
*/

#include <stdio.h>
#include <string.h>
#pragma pack(1)

union tagMyData {
    char m_char: 6;
    unsigned short m_num: 6;
};

int main( ) {
    union tagMyData data;

    // strcpy(data.m_char , "Fifteen");
    // printf("\n%s",data.m_sText);

    data.m_num=7;
    printf("\n%d\n", data.m_num);

    printf("Size of: %d\n",sizeof(data));

return 0;
}