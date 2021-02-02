/*   Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки.
*/

#include <stdio.h>
int main(void){
    int in; 
    while((in= getchar()) != EOF){
        if (in >='A' && in <='Z'){
            in = in+32;
        }
        putchar(in);
    }
    return 0;
}