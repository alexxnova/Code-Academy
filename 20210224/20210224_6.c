 /*
 Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”
*/

#include <stdio.h>
/* добавя префикс към функцията printf */
#define MY_PRINT(...) printf("TRACE: " __VA_ARGS__)

int main(void) {
    MY_PRINT("My favourite numbers are : %d, %d, %d, %d, %d\n",
    3, 7, 21, 45, 99);
return 0;
}