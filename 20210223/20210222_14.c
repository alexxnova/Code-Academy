/*
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#pragma pack(1)

struct tagDate {
    unsigned int m_day : 5; 
    unsigned int m_month : 4; 
    unsigned int m_year;
};

struct tagDate randDate(int d, int m, int y){
    struct tagDate date;
    date.m_day = d;
    date.m_month = m;
    date.m_year = y;
    return date;
}

int vavidateDate(int d, int m, int y){
    if(y>=1000 && y<=9999){
        if(m>=1 && m<=12){    
            if ((d>=1 && d<=31) && (m==1||m==3||m==5||m==7||m==8||m==10||m==12)){
                return 1;
            }
            else if ((d>=1 && d<=31) && (m==4||m==6||m==9||m==11)){
                return 1;
            }
            else if((d>=1 && d<=28) && (m==2)){
                return 1;
            }
            else if((d==29 && m==2 && (y%400==0 ||(y%4==0 && y%100!=0)))){
                return 1;
            }
            else return 0;
        }
        else return 0;
    }else return 0;

}

int main( ) {

    int day=28, month = 2, year = 2021;

    if (vavidateDate(day, month, year)){
        struct tagDate date = randDate(day, month, year);
        printf("\n Valid date %d/%d/%d",date.m_day,date.m_month, date.m_year);
        }
    else printf("\n Date is NOT valid.");

return 0;
}