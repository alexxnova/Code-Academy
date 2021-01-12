#include <stdio.h>

int vzeimBitna(int num, int pos);

int main() {
    int num=50;
    int pos=4;
    vzeimBitna(num,pos);
    return 0;
}

int vzeimBitna(int num,int pos){
    num=num>>pos;
    int h=1;
    int ans=num&h;
    printf("%d",ans);
    return 0;
}