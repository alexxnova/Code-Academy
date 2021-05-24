#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


char * readScannerSignal(char * fileName);
char * decodeRawSignal(char * rawSignal);
int checkNoise(char * rawSignal, int i);
void decodeSignal(char * signal);
int checkStartStop(char * signal);
char reverseString(char *string);
int roundNo(float num);
int validateCode(int n,int * arr);
int equationC(int n,int * arr);
int equationK(int n,int * arr);


