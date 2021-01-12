#include <stdio.h>

int rangeZeros(int num, int posMax, int posMin);

int main() {
    rangeZeros(171, 7 , 3);
    return 0;
}

int rangeZeros(int num, int posMax, int posMin){
    int mask=0xFFFFFFFF;
    mask=mask>>(posMax+posMin+1);
    mask=~(mask<<posMin);
    int ans=num&mask;
    printf("%d",ans);
    return 0;
}
