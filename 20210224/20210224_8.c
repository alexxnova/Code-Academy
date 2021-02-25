 /*
Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)

*/

#include <stdio.h>
/* слепва да идентификатора */
#define MY_CONCAT(x,y) x##y

int main() {
    // (print,f) -> "print"##"f" -> printf
    MY_CONCAT(print,f)("\nThis is test\n");

return 0;
} 