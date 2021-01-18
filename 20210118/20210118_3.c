# include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int true, false;
    true = x+(x||y);
    printf("\ntrue=%d\n", true);
    return 0;
}