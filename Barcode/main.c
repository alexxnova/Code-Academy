#include "prototype.h"
 
int main(){
    
    char fileName[100]; 
    printf("\nName of input file (eg. test1.txt):\n");
    scanf("%s", fileName);

    char * rawSignal = readScannerSignal(fileName);
    char * signal = decodeRawSignal(rawSignal);
    decodeSignal(signal);

    free(rawSignal);
    free(signal);

    return 0;
}
