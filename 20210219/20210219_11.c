/*
Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.
*/

#include <stdio.h>
#include <string.h>

struct reStruct{
    struct reStruct *m_s;
};

int main(void){

    struct reStruct s1;
    struct reStruct s2={&s1};

    s1.m_s = &s2;

    printf("%p\n",&s1);
    printf("%p\n",s2.m_s);

    printf("%p\n",&s2);
    printf("%p\n",s1.m_s);

    return 0;
}