# include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x==y+(z < y)!=20;
    printf("\ntrue=%d\n", true);
    return 0;
}