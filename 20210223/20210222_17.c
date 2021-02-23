/*
Дадени са следните структури и техният пакетиран вариант.
Разпечатайте заеманата от тях памет.
*/

#include <stdio.h>
typedef struct tagTestA {
    char m_ch;
    short int m_si;
} TTestA;

typedef struct tagTestAP {
    char m_ch;
    short int m_si;
} __attribute__((packed)) TTestAP;

typedef struct tagTestB {
    short int m_si;
    char m_ch;
    int m_i;
} TTestB; 

typedef struct tagTestBP {
    short int m_si;
    char m_ch;
    int m_i;
} __attribute__((packed)) TTestBP;

typedef struct tagTestC {
    char m_ch;
    double m_d;
    int m_i;
} TTestC; 

typedef struct tagTestCP {
    char m_ch;
    double m_d;
    int m_i;
} __attribute__((packed)) TTestCP;

typedef struct tagTestD {
    double m_d;
    int m_i;
    char m_ch;
} TTestD; 

typedef struct tagTestDP {
    double m_d;
    int m_i;
    char m_ch;
} __attribute__((packed)) TTestDP; 

int main() {
    printf("sizeof(TTestA) = %d, sizeof(TTestAP) = %d\n",
    sizeof(TTestA), sizeof(TTestAP));
    printf("sizeof(TTestB) = %d, sizeof(TTestBP) = %d\n",
    sizeof(TTestB), sizeof(TTestBP));
    printf("sizeof(TTestC) = %d, sizeof(TTestCP) = %d\n",
    sizeof(TTestC), sizeof(TTestCP));
    printf("sizeof(TTestD) = %d, sizeof(TTestDP) = %d\n",
    sizeof(TTestD), sizeof(TTestDP));
return 0;
} 