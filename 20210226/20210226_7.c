/*
Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.
*/

#include <stdio.h>
#define MAX 10

typedef struct{ 
    char name[MAX]; 
    int num; 
}key_t;

int main(void){

    key_t kaytab[MAX];

    for(int i = 0; i < MAX; i++ )
    {
        printf("Enter keyword: ");
        scanf("%s", kaytab[i].name);

    }

    for(int i = 0; i < MAX; i++ ){
        printf("%s\t%d", kaytab[i].name,  kaytab[i].num);
    }
    
return 0;
}
