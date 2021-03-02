#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
  int diam;
  float thickness;
}watMel;

int main(){
  srand((unsigned)time(NULL));
  int a, b;
  printf("How many melon watermelons?");
  scanf("%d", &a);
  printf("How many pumpkin watermelons?");
  scanf("%d", &b);
  watMel *melons = malloc(a *sizeof(watMel));
  watMel *pumpkins = malloc(b *sizeof(watMel));
  float x;
  int avgDiamMelons, avgDiamPumpkins, sumDiamMel=0, sumDiamPump=0;
  float avgThicknessMelons, avgThicknessPumpkins, sumThicknessMel=0, sumThicknessPump=0;

  for(int i = 0; i < a; i++){
    x = ((double)rand() / RAND_MAX) * (3.5 - 0.5) + 0.5;
    melons[i].thickness = x;
    sumThicknessMel = sumThicknessMel + melons[i].thickness;
    
    melons[i].diam=rand()%126+15;
    sumDiamMel=sumDiamMel + melons[i].diam;
    printf("Watermelon(melon): Diameter = %d Thickness = %f\n",
          melons[i].diam,melons[i].thickness);
  }

  avgDiamMelons = sumDiamMel / a;
  avgThicknessMelons = sumThicknessMel / (float)a;

  for(int i = 0; i < b; i++){
    x = ((double)rand() / RAND_MAX) * (0.9 - 0.3) + 0.3;
    pumpkins[i].thickness=x;
    sumThicknessPump = sumThicknessPump + pumpkins[i].thickness;

    pumpkins[i].diam=rand()%96+35;
    sumDiamPump=sumDiamPump+pumpkins[i].diam;
    printf("Watermelon(pumpkin): Diameter = %d Thickness = %f\n",
          pumpkins[i].diam,pumpkins[i].thickness);
  }

  avgDiamPumpkins = sumDiamPump / b;
  avgThicknessPumpkins = sumThicknessPump / (float)b;
  float totalMelons = (float)avgDiamMelons-avgThicknessMelons;
  float totalPumpkins = (float)avgDiamPumpkins-avgThicknessPumpkins;

  if(totalMelons > totalPumpkins){
    printf("It is better to buy %d watermelons from melons type with diameter %d and width %f,"
          "than %d watermelons from pumpkin type with diameter %d and width %f ",
          a, avgDiamMelons,avgThicknessMelons ,b, avgDiamPumpkins, avgThicknessPumpkins);
  }else{
    printf("It is better to buy %d watermelons from pumpkins type with diameter %d and width %f,"
          "than %d watermelons from melon type with diameter %d and width %f ",
          b, avgDiamPumpkins, avgThicknessPumpkins, a, avgDiamMelons, avgThicknessMelons);
  }
  
  free(melons);
  free(pumpkins);
  return 0;
}
