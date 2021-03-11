/* Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.*/


#include <stdio.h>
#include <stdlib.h>



typedef struct{
    float weight;
    float size;
}parcel;

float priceWeight(float weight, FILE *log);
float priceSize(float size, FILE *log);
float priceSingleShipping(parcel * shipping, int numParcels, FILE *log);
float priceComboShipping(parcel * shipping,  int numParcels, FILE *log);
void better(float totalPriceSingle, float totalPriceCombo, FILE *log);

int main(){

    FILE * log = NULL;
    log = fopen("log.txt", "wt");
    if (log == NULL){
        printf("Couldn't open log file\n");
        return 1;
    }

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

    float totalPriceSingle = priceSingleShipping(shipping,count,log);
    float totalPriceCombo = priceComboShipping(shipping,count,log);

    better(totalPriceSingle, totalPriceCombo,log);

    free(shipping);
    return 0;
}

float priceWeight(float weight, FILE *log){

    if(weight<=0){
        printf("priceWeight() failure: Input should be a positive float number.\n");
        fputs("priceWeight() failure: Input should be a positive float number.\n",log);
    }else fputs("priceWeight() success\n",log);

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
float priceSize(float size, FILE *log){
    if(size<=0){
        printf("priceSize() failure: Input should be a positive float number.\n");
        fputs("priceSize() failure: Input should be a positive float number.\n",log);
    }else fputs("priceSize() success\n",log);

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


float priceSingleShipping(parcel * shipping, int numParcels, FILE *log){
    
    float totalPriceSingle=0;
    for(int i=0; i<numParcels; i++){
        totalPriceSingle += (priceWeight(shipping[i].weight,log) + priceSize(shipping[i].size,log));
    }

    if(numParcels<=0){
        printf("priceSingleShipping() failure: Input should be a positive float number.\n");
        fputs("priceSingleShipping() failure: Input should be a positive number.\n",log);
    }else fputs("priceSingleShipping() success\n",log);

    return totalPriceSingle;
    }

float priceComboShipping(parcel * shipping,  int numParcels, FILE *log){
    float totalWeight = 0;
    float totalSize = 0;
    for(int i=0; i<numParcels; i++){
        totalWeight += shipping[i].weight;
        totalSize += shipping[i].size;
    }
    if(numParcels<=0){
        printf("priceComboShipping() failure: Input should be a positive float number.\n");
        fputs("priceComboShipping() failure: Input should be a positive number.\n",log);
    }else fputs("priceComboShipping() success\n",log);

    return (priceWeight(totalWeight,log) + priceSize(totalSize,log));
    }

void better(float totalPriceSingle, float totalPriceCombo, FILE *log){
    float diff = totalPriceSingle-totalPriceCombo;  // difference in prices
    if (diff<0){ // if positive
        printf("It is better to send your parcels separately. In this case they will cost %.2f leva instead of %.2f leva.\n", totalPriceSingle, totalPriceCombo);
            
    }else if (diff>0){ // if negative
        printf("It is better to combine your shipments. In this case they will cost %.2f leva instead of %.2f leva.\n", totalPriceCombo, totalPriceSingle);       
    }
    else printf("Your shipment will cost %.2f leva.\n", totalPriceSingle);

    if(totalPriceSingle<=0 || totalPriceCombo<=0){
        printf("better() failure: Input should be a positive float number.\n");
        fputs("better() failure: Input should be a positive number.\n",log);
    }else fputs("better() success\n",log);
}