/*  Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът има букви и
цифри. Принтирайте с putchar(). Използвайте условните оператори, за
да премахнете последните шпациите и табулациите в стринга
*/

#include <stdio.h>
int main(void){
    int in, valid=1, i=0; 
    while((in= getchar()) != EOF){
        if ((in ==' ')){
            if (valid == 1 && in!='\0'){
                continue;
            }
            valid=1;
        }
        else{
            valid=0;
        }
        putchar(in);
    }
    return 0;
}