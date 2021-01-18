# include <stdio.h>

int main(){

    int nA;
    int nB;
    printf("Enter number A:\n");
    scanf("%d",  &nA);
    printf("Enter number B:\n");
    scanf("%d",  &nB);

    int rez = ( nA > nB ? nA : nB);
    printf("Bigger nukmber is: %d\n", rez);
    return 0;
}