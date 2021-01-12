#include <stdio.h>

int evenZeros(int num);

int main() {
    evenZeros(171);
    return 0;
}

int evenZeros(int num){
    int mask=7;
    int ans=num&mask;
    printf("%d",ans);
    return 0;
}