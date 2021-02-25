/*
Използвайте предефинирани макроси
*/

#include <stdio.h>

int main() {
    printf("File :%s\n", __FILE__ ); /* File :.\20210224_4.c */
    printf("Date :%s\n", __DATE__ ); /* Date :Feb 24 2021 */
    printf("Time :%s\n", __TIME__ ); /*Time :15:26:48 */
    printf("Line :%d\n", __LINE__ ); /* Line :11 */
    printf("ANSI :%d\n", __STDC__ ); /* ANSI :1 */
return 0;
}