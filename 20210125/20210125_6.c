/* Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.
*/

#include <stdio.h>
int main(void){

    int in, i=0, j=0; 

    while((in=getchar()) != EOF){
        if (in >='0' && in <='9'){
            i++;
            continue;
        }       
        else if ((in >='a' && in <='z') || (in >='A' && in <='Z')){
            j++;
        }
        else if (in =='\n'){ // Декрементира j с едно ако низа съдържа '\n', n e преброен в предходния if
            j--;
        }

    }
    printf("Entered numbers: %d \n", i);
    printf("Entered letters: %d \n", j);
    return 0;
}

