#include <stdio.h>

int evenZeros(int num);

int main() {
    evenZeros(200);
    return 0;
}

int evenZeros(int num){
    int mask=0xaaaaaaaa;
    int ans=num&mask;
    printf("%d",ans);
    return 0;
}