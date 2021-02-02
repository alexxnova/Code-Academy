/*  Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.
*/

#include <stdio.h>

int main(void){

    int c, i=0, limit = 80;
    char s[1000];
    while((c=getchar()) != EOF && c!='\n'){
        s[i]=c;
        i++;
        if (i > limit){
            printf("%s\n",s);
            s[i]= '\0';
            i=0;
        }
    }
    return 0;
}