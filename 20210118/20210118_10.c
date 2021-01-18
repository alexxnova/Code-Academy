# include <stdio.h>
int main() {
    
    int nResult = 20; /* опитайте с други стойности */
    int nX = 2;
    printf("Result = %d\n", nResult);
    
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);

    nResult = 1;
    nResult &= nX;
    printf("Result &= %d -> %d\n", nX, nResult);

    nResult = 1;
    nResult ^= nX;
    printf("Result ^= %d -> %d\n", nX, nResult);

    return 0;
} /* използвайте и други оператори за присвояване */