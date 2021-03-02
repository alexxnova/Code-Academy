
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
#include <stdlib.h>

typedef struct {
    int m_hour;
    int m_min;
    int m_sec;
}tagTMyTime;

void addSec( tagTMyTime * tag_sec){
    tag_sec->m_sec++;
}
void addMin( tagTMyTime * tag_min){
    tag_min->m_min++;
}
void addHour( tagTMyTime * tag_hour){
    tag_hour->m_hour++;    
}

int countSec( tagTMyTime * tag_toCount){
    int secondsTotal = tag_toCount->m_hour*3600 + tag_toCount->m_min*60 + tag_toCount->m_sec;
    return secondsTotal;
}

tagTMyTime secToHMS( int sec){
    int h = sec/3600;
    int m =  (sec - 3600*h)/60;
    int s = (sec - 3600*h - m*60);
    tagTMyTime tag_toHMS = {h,m,s};
    return tag_toHMS;
}
tagTMyTime sumHMS(tagTMyTime * time1, tagTMyTime * time2){
    int sumSeconds=0, sumMinutes=0, sumHours=0;

    sumSeconds=time1->m_sec + time2->m_sec;
    sumMinutes=time1->m_min + time2->m_min;
    sumHours=time1->m_hour + time2->m_hour;

    sumMinutes += sumSeconds/60;
    sumSeconds %= 60;
    sumHours += sumMinutes/60;
    sumMinutes %=60;

    tagTMyTime sum = {sumHours,sumMinutes,sumSeconds};

    return sum;
}


int main( ) {

    tagTMyTime * time = (tagTMyTime*)(malloc(sizeof(tagTMyTime)));

    printf("Enter hour:\n");
    fflush(stdin);
    scanf("%d", &time->m_hour);

    printf("Enter minutes:\n");
    fflush(stdin);
    scanf("%d", &time->m_min);

    printf("Enter seconds:\n");
    fflush(stdin);
    scanf("%d", &time->m_sec);

    printf("\nHOUR \tMIN \tSEC");
    printf("\n%d \t%d \t%d", time->m_hour, time->m_min, time->m_sec);
    printf("\nHOUR++ \tMIN++ \tSEC++");
    addSec(time);
    addMin(time);
    addHour(time);
    printf("\n%d \t%d \t%d", time->m_hour, time->m_min, time->m_sec);
    printf("\nCount seconds:");
    int totalSec = countSec(time);
    printf("\n%d:%d:%d in seconds is %d", time->m_hour, time->m_min, time->m_sec, totalSec);
    printf("\nSeconds to H:M:S:");
    tagTMyTime HMS = secToHMS(totalSec);
    printf("\n%d seconds is %d:%d:%d",totalSec, HMS.m_hour,  HMS.m_min, HMS.m_sec );

    tagTMyTime sum = sumHMS(&HMS, &HMS);
    printf("\nSum H:M:S + H:M:S = %d:%d:%d", sum.m_hour,  sum.m_min, sum.m_sec );

return 0;
}