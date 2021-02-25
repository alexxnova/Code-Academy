/*
Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -Dlalala)
*/

#include <stdio.h>

void debugMsg(const char *pszMsg) {

#ifdef lalala
    printf("DEBUG: %s\n", pszMsg);
#endif
}

int main(void) {
    debugMsg("Lalala");
return 0; }