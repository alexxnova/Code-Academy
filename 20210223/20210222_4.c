/*
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3=2020,.member1=21, .memeber2=2};
*/

#include <stdio.h>
#include <string.h>

struct date {
    int m_day;
    int m_month;
    int m_year;
};

int main( ) {

    struct date contractdate = {22,02,2021};

    contractdate.m_day = 22;
    contractdate.m_month = 02;
    contractdate.m_year = 2021;

    struct name contractdate = {.memeber3=2020,.member1=21, .memeber2=2};

return 0;
}