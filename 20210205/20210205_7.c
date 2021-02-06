/*
Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strend(char *s, char *t);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    char str2[] = {'A','g','g','i','n','\0'};
    printf("%d", strend(str, str2));
    return 0;
}  

int strend(char *s, char *t)
{
    char *ps = s;   //запомняме началото на масива s
    char *pt = t;   //запомняме началото на масива t
    
    while (*ps) {   //докато s е различно от нула
        t = pt;     // налото на масива t
        for (s = ps; *s == *t; s++, t++) {  //
            if (*s == '\0' && *t == '\0') {
                return 1;
            }
        }
        ps++;
    }
    return 0;
}