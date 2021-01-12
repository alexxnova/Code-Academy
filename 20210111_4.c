#include <stdio.h>

int vdigniBitNa(int num, int pos);

int main() {
    int num=200;
    int pos=2;
    vdigniBitNa(num,pos);
    return 0;
}

int vdigniBitNa(int num,int pos){
    int mask=1<<pos;
    int ans=num|mask;
    printf("%d",ans);
    return 0;
}