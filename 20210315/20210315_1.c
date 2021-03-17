
/* Използвайте динамична реализация на стек за въвеждане на поредица
от цели положителни числа и нейното извеждане върху екрана в
обратен ред. За край на поредицата от клавиатурата се въвежда 0 */

#include "stack.h"

node_t *start= NULL;

int main(void){
    int n = 1;

    while (n){
        printf("Enter a digit:\n");
        scanf("%d", &n);
        push(n);
    }

    while(pop(&n))
        printf("%d", n);
        
return 0;
}
