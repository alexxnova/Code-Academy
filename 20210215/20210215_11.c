/*
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).

Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.
*/

#include <stdio.h>

int main(){

    int i = 5;
    float f = 5.0f;
    char c = '5';

    int * pi = &i;
    float * pf = &f;
    char * pc = &c;

    //int multiply = (*pi) * (*pf);     // int*float with int result 25
    //float multiply = (*pi) * (*pf);   // int*float with float result 0
    char multiply = (*pi) * (*pc);      // int* char with char result 9

    
    
    printf("%d\n", multiply);
    // printf("%f\n", *pf);
    // printf("%c\n",s *pc);

    int arr[3] = { 5, 10, 20 };
    int *ptr;
    ptr = arr ; //Какво ще стане ако изпусна този ред и не задам стойност на поинтера? Опитайте! 
    for (int i = 0; i < 3; i++) {
        printf("%d ", ++(*ptr++)); //Мога ли да напиша тук printf("%d ",*ptr++); и да махна долния ред?
                                    //Как и защо работи ++ след пойнтер?
}


return 0;
}

