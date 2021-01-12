#include <stdio.h>

int iz4istiBitna(int num, int pos);

int main() {
    int num=200;
    int pos=6;
    iz4istiBitna(num,pos);
    return 0;
}

int iz4istiBitna(int num,int pos){
    int mask=1<<pos;
    int ans=num^mask;
    printf("%d",ans);
    return 0;
}