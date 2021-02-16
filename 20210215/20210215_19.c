/*
 Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“.
*/

#include <stdio.h>

int main(){
    char s[]= "Baba, kaka, mama";
    char * ps = s;

    while(*ps++){
        if (*ps== 'a'){
            *ps= 'o';
        }
    }

    printf("%s\n", s);

return 0;
}

