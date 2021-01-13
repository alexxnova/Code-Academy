#include <stdio.h>

 int main(){
     signed char sChar= -127;
     printf("Signed char:\n%d\n", sChar);
     unsigned char uChar= 255;
     printf("Unsigned char:\n%d\n", uChar);
     unsigned int uInt =  6237498;
     printf("Unsigned int:\n%u\n", uInt);
     unsigned int uInt2 =  4294967292;
     printf("Unsigned int:\n%u\n", uInt2);
     long long int llInt = -9000000000000775845;
     printf("Long long int:\n%lld\n", llInt);
    return 0;
    }