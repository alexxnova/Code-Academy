 /*
Ако имеме дефинирано макро
#define М
кои от по долните дефиниции ще пропаднат:
а) #if M = true
b) #ifdef M = true
c) #ifndef M = false
d) #if defined(M) = true
e) #if !defined(M) = false
*/

#include <stdio.h>

#define M

int main()
{
    #if !defined(M)
        printf("M is defined \n", M);
    #endif
   return 0;
}