/*
Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.
*/

#include <stdio.h>

int printArr(int a[], int l);

int main(void){
  int arrInt[] = {1,2,3};
  int arrLenght =  (sizeof(arrInt)/sizeof(arrInt[0])-1);
  printArr(arrInt, arrLenght);
  return 0;
}

int printArr(int a[], int l){
    for(int i=0; l>=0; i++, l--)
      printf("%d", a[i]);
    return 0;
}

