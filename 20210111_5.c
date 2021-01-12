#include <stdio.h>

int obarniBitNa(int num, int pos);

int main() {
    int num=200;
    int pos=5;
    obarniBitNa(num,pos);
    return 0;
}

int obarniBitNa(int num,int pos){
    int mask=1<<pos;
    mask = ~mask;
    int ans=num&mask;
    printf("%d",ans);
    return 0;
}