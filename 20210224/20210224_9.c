 /*
Напишете макрос, който прави идентификатор на низ
(стринг)
*/

#include <stdio.h>

#define MY_STR(x) #x

int main() {
    int nValue = 0;
    printf("%s", MY_STR(fValue)); //converts the variable name, not the value, into a string constant
 return 0;
} 