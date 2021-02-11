/*
Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int len = 6; //lenght of the pasword
    char password[len];
    char ans = 'y';
    srand(time(0)); // time as randomness seed

    printf("Welcome to the password generator!\n");

    while (ans=='y' || ans=='Y')
    {
        printf("\nThis is your new password:\n");
        for (int i = 0; i < len; i++)
        {
            password[i] = (rand() % (123 - 97) + 97); // Random numbers the range from 97 to 122 from the ASCII table
            putchar(password[i]);
        }
        
        printf("\nDo you want to generate another password?\nEnter Y/N ?\n");
        scanf(" %c", &ans);
    }

    printf("\nYour password is:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%c", password[i]);
    }
    return 0;
}
