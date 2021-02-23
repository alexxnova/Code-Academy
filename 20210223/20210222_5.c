/*
Направете масив от 10 структури от задача 4. 
Задайте стойност на 10 -те дати, по избор.

struct name array[10];
array[i].member = value; 
struct name array[10]= { {1,3,2019}, {3,4,2020}} 
struct name array[10] = { [1] = {3,4,2020} }; 
struct name array[10] = {[1].month = 4,[1].year = 2020}; 
*/

#include <stdio.h>
#include <string.h>

struct date {
    int m_day;
    int m_month;
    int m_year;
};

int main( ) {
    struct date contractdate[10] = {[0].m_day = 1, [0].m_month = 4, [0].m_year = 2022,
                                    [1].m_day = 2, [1].m_month = 5, [1].m_year = 2022,
                                    [2].m_day = 3, [2].m_month = 5, [2].m_year = 2022,
                                    [3].m_day = 4, [3].m_month = 5, [3].m_year = 2022,
                                    [4].m_day = 5, [4].m_month = 5, [4].m_year = 2022,
                                    [5].m_day = 6, [5].m_month = 5, [5].m_year = 2022,
                                    [6].m_day = 7, [6].m_month = 5, [6].m_year = 2022,
                                    [7].m_day = 8, [7].m_month = 5, [7].m_year = 2022,
                                    [8].m_day = 9, [8].m_month = 5, [8].m_year = 2022,
                                    [9].m_day = 10, [9].m_month = 5, [9].m_year = 2022}; 
    printf("\nDAY \tMONTH \tYEAR");
    for (int i = 0; i<10; i++){
        printf("\n%d \t%d \t%d", contractdate[i].m_day, contractdate[i].m_month, contractdate[i].m_year);
    }
return 0;
}