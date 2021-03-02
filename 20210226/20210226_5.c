/*
Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.
*/

#include <stdio.h>
#define MAX 10
typedef int arr[MAX];

int main(void){

    arr sequence = {1,1,2,3,5,8,13};
    for(int i = 0; i < MAX; i++)
      printf("%d ", sequence[i]);

return 0;
}
