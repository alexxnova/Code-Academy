#include <stdio.h>

int linSearch(int*, int l, int d);

int main(void){
  int arrInt[] = {1,2,3};
  int arrLenght =  (sizeof(arrInt)/sizeof(arrInt[0])-1);
  int num = 3;

  printf("%d", linSearch(arrInt, arrLenght, num));

  return 0;
}

int linSearch(int arr[], int l, int d){
  int i=0;
  while(l>=0){
    if (arr[i]!=d){
      i++;
      l--;
    }
    else{
      return i;
      break;
    }
    }
  return -1;
}