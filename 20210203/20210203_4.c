/*
.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.
*/

#include <stdio.h>

int binarySearch(int a[], int n, int x);

int main(void){
  int arrInt[] = {1,2,3,4,5,6,7};
  int arrLenght =  (sizeof(arrInt)/sizeof(arrInt[0])-1);
  int num = 3;

  printf("%d", binarySearch(arrInt, arrLenght, num));

  return 0;
}

int binarySearch(int a[], int n, int x){
  int firstPos = 0;
  int lastPos = n;
  
  while((lastPos-firstPos) >= 1){
    int midPos = firstPos+(lastPos-firstPos)/2;
    
    if (x==a[midPos]){
        return midPos;
    }
    else if(x>=a[midPos]){
      firstPos = midPos;
    }
    else{
      lastPos = midPos;
    }
}
return -1;
}