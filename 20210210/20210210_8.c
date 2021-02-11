/*
Решете задачата за генериране на 6 буквена парола с
пойнтери.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int len = 6;            //lenght of the pasword
    char password[len-1];     
    char ans = 'y';

    srand(time(0)); // time as randomness seed

    printf("Welcome to the password generator!\n");

    while (ans=='y' || ans=='Y')
    {                               // reset the pointers every loop
        char * pi = password;       //pointer to the first element
        char * pz = &password[len-1]; //pointer to the last element
        
        printf("\nThis is your new password:\n");
        for (; pi <= pz; pi++)                  
        {
            *pi = (rand() % (123 - 97) + 97); // Random numbers the range from 97 to 122 from the ASCII table
            putchar(*pi);                     // display the char equivalent to the value at current adress
        }
        
        printf("\nDo you want to generate another password?\nEnter Y/N ?\n");
        scanf(" %c", &ans);
    

    printf("\nYour password is:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%c", password[i]);
    }
    
    return 0;
}
