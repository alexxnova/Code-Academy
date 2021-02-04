#include <stdio.h>

int main(void){
  char arrChar[] = {'A','B','C'};
  int arrInt[] = {1,2,3};
  double arrDouble[] = {1.1,2.2,3.3};

  printf("%d\n", sizeof(arrChar));
  printf("%d\n", sizeof(arrInt));
  printf("%d\n", sizeof(arrDouble));

  int lastChar = (sizeof(arrChar)/sizeof(arrChar[0])-1);
  int lastInt = (sizeof(arrInt)/sizeof(arrInt[0])-1);
  int lastDouble = (sizeof(arrDouble)/sizeof(arrDouble[0])-1);

  printf("%c\n", arrChar[lastChar]);
  printf("%d\n", arrInt[lastInt]);
  printf("%f\n", arrDouble[lastDouble]);
    return 0;
}
