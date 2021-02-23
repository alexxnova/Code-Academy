/*
Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. 
Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. 
Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.
*/

#include <stdio.h>
#include <string.h>

struct tagTMyTime {
    int m_hour;
    int m_min;
    int m_sec;
};

void addSec( struct tagTMyTime * tag_sec){
    tag_sec->m_sec++;
}
void addMin( struct tagTMyTime * tag_min){
    tag_min->m_min++;
}
void addHour( struct tagTMyTime * tag_hour){
    tag_hour->m_hour++;    
}

int countSec( struct tagTMyTime * tag_toCount){
    int secondsTotal = tag_toCount->m_hour*3600 + tag_toCount->m_min*60 + tag_toCount->m_sec;
    return secondsTotal;
}

struct tagTMyTime secToHMS( int sec){
    int h = sec/3600;
    int m =  (sec - 3600*h)/60;
    int s = (sec - 3600*h - m*60);
    struct tagTMyTime tag_toHMS = {h,m,s};
    return tag_toHMS;
}
struct tagTMyTime sumHMS(struct tagTMyTime * time1, struct tagTMyTime * time2){
    int sumSeconds=0, sumMinutes=0, sumHours=0;

    sumSeconds=time1->m_sec + time2->m_sec;
    sumMinutes=time1->m_min + time2->m_min;
    sumHours=time1->m_hour + time2->m_hour;

    sumMinutes += sumSeconds/60;
    sumSeconds %= 60;
    sumHours += sumMinutes/60;
    sumMinutes %=60;

    struct tagTMyTime sum = {sumHours,sumMinutes,sumSeconds};

    return sum;
}


int main( ) {

    struct tagTMyTime now = {1, 25, 45};
    printf("\nHOUR \tMIN \tSEC");
    printf("\n%d \t%d \t%d", now.m_hour,  now.m_min, now.m_sec );
    addSec(&now);
    addMin(&now);
    addHour(&now);
    printf("\n%d \t%d \t%d", now.m_hour,  now.m_min, now.m_sec );

    int totalSec = countSec(&now);
    printf("\nTotal seconds: %d", totalSec);
    
    struct tagTMyTime HMS = secToHMS(totalSec);
    printf("\n%d seconds to H:M:S %d:%d:%d",totalSec, HMS.m_hour,  HMS.m_min, HMS.m_sec );

    struct tagTMyTime sum = sumHMS(&HMS, &HMS);
    printf("\nSum H:M:S + H:M:S = %d:%d:%d", sum.m_hour,  sum.m_min, sum.m_sec );


return 0;
}