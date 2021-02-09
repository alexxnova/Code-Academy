/*
Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.
*/

#include <stdio.h>

//int **monthDays[2][13];

int dayNumber( int year, int mon, int day);

int monthDays[2][13]={
        {0,0,31,59,90,120,151,181,212,243,273,304,334},
        {0,0,31,60,91,121,152,182,213,244,274,305,335}
    };
        

int main(void){

    int year = 2021;
    int mon = 3;
    int day = 1;

    printf("%d",dayNumber(year, mon, day));

    return 0;
}

int dayNumber( int year, int mon, int day){
    int dayNum;
    int leap = (year%4==0) && ((year%400==0) || (year%100!=0));
    return dayNum = (monthDays[leap][mon])+day;

}
