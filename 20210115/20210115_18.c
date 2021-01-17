#include <stdio.h>

int main(){
    char caravan= 3;
    char rv= 3;

    double caravan_price = 90.00;
    double rv_price = 10.00;

    int rez;
    double bill;
    printf("\nWelcome to Caravan and RVs Rent\n");
    printf("\nIf you want to rent Caravan, please press 1.\nIf you want to rent RV, please press 2.\n");
    scanf("%d", &rez);
        if (rez == 1 && caravan>0){
                bill += caravan_price;
                caravan--;
                printf("You got a caravan!\nYour bill is %.2f BGN.\n",bill);
            }
            else if (rez == 2 && rv>0){
                bill += rv_price;
                rv--;
                printf("You got a RV!\nYour bill is %.2f BGN.\n",bill);
            }
            else {
                printf("No vehicles available. Sorry!");
            } 
    printf("\nWould you like something else?\n\nIf you want to rent Caravan, please press 1.\nIf you want to rent RV, please press 2.\nFor EXIT press 0.\n");
    scanf("%d", &rez);
return 0;
}