/* Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) 
Такса до 20 г 0,46 лева; 
21-50 г 0,69 лева; 
51-100 г 1,02 лева; 
101-200 г 1,75 лева; 
201-350 г 2,13 лева; 
351-500 г 2,44 лева; 
501- 1000 г 3,20 лева; 
1001-2000 г 4,27 лева; 
2001-3000 г 5,03 лева;

Обем: до 10см + 0,01лв; 
10- 50 см + 0,11 лева, 
50-100 см + 0,22лв, 
100-150см + 0,33лв, 
150-250см +0,56лв, 
250-400см+1.50лв, 
400-500см+3,11лв, 
500-600см+4,89лв, 
над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева. */


#include <stdio.h>
#include <stdlib.h>

float priceWeight(float weight);
float priceSize(float size);
void better(float totalPriceSingle, float totalPriceCombo);

typedef struct{
    float weight;
    float size;
}parcel;

int main(){
    int count;
    printf("How many parcels?\n");
    fflush(stdin);
    scanf("%d", &count);

    parcel * shipping = (parcel*)(malloc(count*sizeof(parcel))); // array of parcels
    
    for(int i; i<count; i++){
        printf("What is the weight(grams) of your %d parcel?\n", i+1);
        fflush(stdin);
        scanf("%f", &shipping[i].weight);
        printf("What is the size(cm) of your %d parcel?\n", i+1);
        fflush(stdin);
        scanf("%f", &shipping[i].size);
    }
    // Price Single shipping
    float totalPriceSingle=0;
    for(int i; i<count; i++){
        totalPriceSingle += (priceWeight(shipping[i].weight) + priceSize(shipping[i].size));
    }

    // Price combo shipping
    float totalWeight = 0;
    float totalSize = 0;
    for(int i=0; i<count; i++){
        totalWeight += shipping[i].weight;
        totalSize += shipping[i].size;
    }
    float totalPriceCombo=(priceWeight(totalWeight) + priceSize(totalSize));

    better(totalPriceSingle, totalPriceCombo);

    free(shipping);
    return 0;
}

float priceWeight(float weight){
    float result = 0;
    if((weight > 0) && (weight<= 20)){
        result = 0.46;
    }else if((weight >= 21) && (weight <= 50)){
        result = 0.69;
    }else if ((weight >= 51) && (weight <= 100)){
        result = 1.02;
    }else if( (weight >= 101) && (weight <= 200)){
        result = 1.75;
    }else if ((weight >= 201) && (weight <= 350)){
        result = 2.13;
    }else if ((weight >= 351) && (weight <= 500)){
        result = 2.44;
    }else if ((weight >= 501) && (weight <= 1000)){
        result = 3.20;
    }else if ((weight >= 1001) && (weight <= 2000)){
        result = 4.27;
    }
    else if ((weight >= 2001) && (weight <= 3000)){
        result = 5.03;
    }else{
        printf("Invalid kg\n");
    }

    return result;
}
float priceSize(float size){
    float price = 0;
    if ((size > 0)&& (size < 10)){
        price = 0.01;
    }else if ((size >= 10)&& (size < 50)){
        price = 0.11;
    }else if ((size >= 50)&& (size < 100)){
        price = 0.22;
    }else if ((size >= 100)&& (size < 150)){
        price = 0.33;
    }else if ((size >= 150)&& (size < 250)){
        price = 0.56;
    }else if ((size >= 250)&& (size < 400)){
        price = 1.50;
    }else if ((size >= 400)&& (size < 500)){
        price = 3.11;
    }else if ((size >= 500)&& (size < 600)){
        price = 4.89;
    }else if (size >= 600){
        price = 5.79;
    }
    return price;
}
void better(float totalPriceSingle, float totalPriceCombo){
    float diff = totalPriceSingle-totalPriceCombo;  // difference in prices
    if (diff<0){ // if positive
        printf("It is better to send your parcels separately. In this case they will cost %.2f leva instead of %.2f leva.\n", totalPriceSingle, totalPriceCombo);
            
    }else if (diff>0){ // if negative
        printf("It is better to combine your shipments. In this case they will cost %.2f leva instead of %.2f leva.\n", totalPriceCombo, totalPriceSingle);       
    }
    else printf("Your shipment will cost %.2f leva.\n", totalPriceSingle);
}