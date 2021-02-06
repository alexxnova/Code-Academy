/*
Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.
*/

#include <stdio.h>
long int my_strlen(char *s);

int main(void){
    char str[] = {'H','e','l','l','o','\0'};
    printf("%d",my_strlen(str));
    return 0;
}

long int my_strlen(char *s){
    int size_t=0;
    for(;*s;s++)
        size_t++;
return size_t;
}

