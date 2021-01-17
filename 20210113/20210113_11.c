#include <stdio.h>

 int main(){
    float howMuch;
    float total;
    double tomatoPrice = 4.5;
    double flourPrice = 1.8;
    double candyPrice = 1.5;
    double yogurtPrice = 0.5;
    double iceCreamConePrice = 0.6;
    double lollypopPrice = 015;
    
    printf("Welcome!\nWe have tomato, flour, candy, yogurt, icecream cones and lollypops.\n
    What would you like today?\n");
    
    printf("How much?\n");
    scanf("%f",&howMuch);
    
    total = tomatoPrice*howMuch;
    printf("Thank you! This would be %f\n", total);
    return 0;
    }
