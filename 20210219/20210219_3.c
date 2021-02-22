/* Указатели към структура, предаване на структура на функция по
стойност и по референция*/

#include <stdio.h>
#include <string.h>

struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

void printPaperValue( struct tagPaper paper ) {
    printf( "Paper id : %d\n", paper.m_nBookId);
    printf( "Paper title : %s\n", paper.m_szTitle);
    printf( "Paper author : %s\n", paper.m_szAuthor);
    printf( "Paper subject : %s\n", paper.m_szSubject);
}

void printPaperPointer( struct tagPaper* pPaper ) {
    printf( "Paper id : %d\n", pPaper->m_nBookId);
    printf( "Paper title : %s\n", pPaper->m_szTitle);
    printf( "Paper author : %s\n", pPaper->m_szAuthor);
    printf( "Paper subject : %s\n", pPaper->m_szSubject);
}
int main( ) {
    struct tagPaper myPaper = { 123456, "Paper title", "Autor", "paper subject" };

    printPaperValue(myPaper);
    printf("---\n");
    printPaperPointer(&myPaper);

return 0;
}