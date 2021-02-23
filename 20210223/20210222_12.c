/*
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).
*/

#include <stdio.h>
#include <string.h>
#pragma pack(1)

struct tagMyData {
    char m_char: 6;
    char m_char1: 6;
    short int m_num: 3;
    short int m_num1: 3;
};

int main( ) {
    struct tagMyData data;

    // data.m_num=7;
    // printf("\n%d", data.m_num);
    // data.m_char='c';
    // printf("\n%c",data.m_char);
    printf("Size of: %d",sizeof(data));

return 0;
}